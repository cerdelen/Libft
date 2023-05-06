/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:00:44 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/06 12:30:07 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Deletes all occurences in which compare function returns true
*
* Parameters
*	#1. The adress of a pointer to a list.
*	#2. Function to be applied to content
*
* Return Values
*	True if at least 1 elem got deleted, False if nothing got deleted
*/
bool	ft_lstfilter(t_list **lst, void *control, bool (*f)(void*, void*), void (*del)(void*))
{
	t_list	*ptr;
	t_list	*prev;
	bool	ret;

	if (!(*lst))
		return (false);
	ptr = *lst;
	prev = NULL;
	ret = false;
	while (ptr)
	{
		if (f(control, ptr->content))
		{
			ret = true;
			if(prev == NULL)
			{
				*lst = ptr->next;
				ft_lstdelone(ptr, del);
				ptr = *lst;
				continue ;
			}
			prev->next = ptr->next;
			ft_lstdelone(ptr, del);
			ptr = prev->next;
			continue ;
		}
		prev = ptr;
		ptr = ptr->next;
	}
	return (ret);
}

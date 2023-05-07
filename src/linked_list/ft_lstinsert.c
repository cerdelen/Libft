/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 08:52:41 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/07 09:08:37 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Inserts element first time function returns true or at end of the list
*
* Parameters
*	#1. The adress of a pointer to a list.
*	#2. Element to be inserted.
*	#3. Function to be applied to content to determine where to insert.
*
* Return Values
*	Nothing
*/
void	ft_lstinsert(t_list **lst, t_list *elem, bool (*f)(void*, void*))
{
	t_list	*ptr;
	t_list	*prev;

	if (!elem)
		return ;
	if (!(*lst))
	{
		ft_lstadd_front(lst, elem);
		return ;
	}
	ptr = *lst;
	prev = NULL;
	while (ptr)
	{
		if (f(elem->content, ptr->content))
		{
			if(prev == NULL)
			{
				elem->next = *lst;
				*lst = elem;
				return ;
			}
			elem->next = ptr;
			prev->next = elem;
			return ;
		}
		prev = ptr;
		ptr = ptr->next;
	}
	prev->next = elem;
	elem->next = NULL;
}

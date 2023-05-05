/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsthas.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:56:25 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/05 13:02:21 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Searches if content is already included in the list
*
* Parameters
*	#1. The adress of a pointer to a list.
*	#2. The adress of a content which we are looking for
*
* Return Values
*	True if it already includes this object
*	False if it does not already includes this object
*/
bool	ft_lsthas(t_list *lst, void *cont)
{
	t_list	*ptr;

	if (!lst)
		return (false);
	ptr = lst;
	while (ptr)
	{
		if (ptr->content == cont)
			return (true);
		ptr = ptr->next;
	}
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:01:29 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/22 12:05:33 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Takes as a parameter a list and copies the whole list.
*	Content is not duplicated!!!
*
* Parameters
*	#1. The address of a pointer to an element.
*
* Returns
*	Pointer to first elem of list
*/
t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*new_lst = NULL;

	if (!lst)
		return NULL;
	while (lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(lst->content));
		lst = lst->next;
	}
	return (new_lst);
}

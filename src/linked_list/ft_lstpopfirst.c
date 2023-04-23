/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:02:25 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/23 14:08:28 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Removes first element of list
*
* Parameters
*	#1. Address of ptr to list
*
*/
void	ft_lstpopfirst(t_list **lst, void (*del)(void *))
{
	t_list	*first = *lst;

	if (!(*lst))
		return ;
	if (!(*lst)->next)
		*lst = NULL;
	else
		*lst = first->next;
	ft_lstdelone(first, del);
}

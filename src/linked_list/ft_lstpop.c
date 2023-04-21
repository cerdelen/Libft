/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:58:25 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/21 14:22:43 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Removes last element of list
*
* Parameters
*	#1. Address of ptr to list
*
*/
void	ft_lstpop(t_list **lst, void (*del)(void *))
{
	t_list	*second_to_last;

	if (!(*lst))
		return ;
	if (!(*lst)->next)
	{
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
		return ;
	}
	second_to_last = *lst;
	while(second_to_last->next->next)
		second_to_last = second_to_last->next;
	del(second_to_last->next->content);
	free(second_to_last->content);
	second_to_last->next = NULL;
}

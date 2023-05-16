/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_bubblesort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:39:37 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/16 17:18:54 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Sorts the list with bubblesort coparing with the provided function.
*
* Parameters
*	#1. The address of a pointer to the first link of a list.
*	#2. Function used to compare 2 elements.
*/
void	ft_lst_bubblesort(t_list **lst, bool (*comp)(void*, void*))
{
	if (!lst)
		return ;
	t_list	*tmp = *lst;
	t_list	*prev = NULL;

	while (tmp && tmp->next)
	{
		if (comp(tmp->content, tmp->next->content))
		{
			if (prev)
			{
				prev->next = tmp->next;
				tmp->next = prev->next->next;
				prev->next->next = tmp;
			}
			else
			{
				*lst = tmp->next;
				tmp->next = tmp->next->next;
				(*lst)->next = tmp;
			}
			tmp = *lst;
			prev = NULL;
			continue ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}

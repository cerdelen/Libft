/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_mergesort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:22:20 by cerdelen          #+#    #+#             */
/*   Updated: 2023/05/16 19:45:55 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


void	split_list_to_halves(t_list **lst, t_list **left, t_list **right)
{
	size_t	len = ft_lstsize(*lst);
	size_t	i = 0;
	t_list	*tmp = *lst;

	*left = *lst;
	while (i + 1 < len / 2)
	{
		tmp = tmp->next;
		i++;
	}
	*right = tmp->next;
	tmp->next = NULL;
}


void	merge(t_list *left, t_list *right, t_list **dst, bool (*comp)(void*, void*))
{
	t_list	*tmp;

	if (comp(left->content, right->content))
	{
		*dst = right;
		right = right->next;
	}
	else
	{
		*dst = left;
		left = left->next;
	}
	tmp = *dst;
	while (left && right)
	{
		if (comp(left->content, right->content))
		{
			tmp->next = right;
			right = right->next;
			tmp = tmp->next;
		}
		else
		{
			tmp->next = left;
			left = left->next;
			tmp = tmp->next;
		}
	}
	if (right)
		tmp->next = right;
	if (left)
		tmp->next = left;
}

/*
* Description
*	Sorts the list with mergesort coparing with the provided function.
*
* Parameters
*	#1. The address of a pointer to the first link of a list.
*	#2. Function used to compare 2 elements.
*/
void	ft_lst_mergesort(t_list **lst, bool (*comp)(void*, void*))
{
	if (!lst)
		return ;
	if (ft_lstsize(*lst) < 2)
		return ;
	t_list	*left = NULL;
	t_list	*right = NULL;

	split_list_to_halves(lst, &left, &right);
	ft_lst_mergesort(&left, comp);
	ft_lst_mergesort(&right, comp);
	merge(left, right, lst, comp);
}
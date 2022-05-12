/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_d_arrays_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:47:00 by cerdelen          #+#    #+#             */
/*   Updated: 2022/05/12 20:34:43 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	print_2d_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_putstr_fd(arr[i], fd);
		if (arr[i][ft_strlen(arr[i]) - 1] != '\n')
			ft_putchar_fd('\n', fd); 
		i++;
	}
}

void	free_2d_array(char	**arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
}

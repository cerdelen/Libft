/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_d_arrays_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:47:00 by cerdelen          #+#    #+#             */
/*   Updated: 2022/05/12 19:53:43 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_2d_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_putstr_fd(arr[i++], fd);
		write(fd, "\n", 1);
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

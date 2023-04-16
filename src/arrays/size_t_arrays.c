/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_t_arrays.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:24:47 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/16 16:37:00 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <stdio.h>

void	ft_print_size_t_array(size_t *arr, size_t n, int fd)
{
	size_t	i = 0;

	ft_putstr_fd("[ ", fd);
	while (true)
	{
		ft_putnbr_fd(arr[i], fd);
		i++;
		if (i == n)
			break ;
		ft_putstr_fd(", ", fd);
	}
	ft_putstr_fd(" ]\n", fd);
}

void	ft_print_size_t_array_capped_line(size_t *arr, size_t n, int fd)
{
	size_t	i = 0;
	size_t	j = 0;

	ft_putstr_fd("[ ", fd);
	while (true)
	{
		j = 0;
		while (true)
		{
			ft_putnbr_fd(arr[i + j], fd);
			j++;
			if (i + j == n || j == 10)
				break ;
			ft_putstr_fd(", ", fd);
		}
		if (i + j == n)
			break ;
		ft_putstr_fd(",\n  ", fd);
		i += j;
	}
	ft_putstr_fd(" ]\n", fd);
}

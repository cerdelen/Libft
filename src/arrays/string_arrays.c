/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_arrays.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:47:00 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/16 16:40:52 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <stdio.h>

void	ft_print_string_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	if (arr)
	{
		while (arr[i] != NULL)
		{
			ft_putstr_fd(arr[i], fd);
			if (arr[i][ft_strlen(arr[i]) - 1] != '\n')
				ft_putchar_fd('\n', fd);
			i++;
		}
	}
}

void	ft_free_string_array(char	**arr)
{
	int	i;

	i = 0;
	if (arr)
	{
		while (arr[i] != NULL)
			free(arr[i++]);
		free(arr);
	}
}

/*
*		Returns Size of array INCLUDING! terminating NULL pointer.
*/
size_t	ft_string_array_size(char	**arr)
{
	size_t	i = 1;

	if (!arr)
		return (0);
	while (arr[i] != NULL)
		i++;
	return (i);
}

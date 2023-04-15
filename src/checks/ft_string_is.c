/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_is.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerdelen <cerdelen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:54:22 by cerdelen          #+#    #+#             */
/*   Updated: 2023/04/15 21:58:41 by cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
* Description
*	Tests full string with isXXX function
*
* Return Values
*	Returns 1 if the full string tests true and 0 otherwise.
*/
bool	ft_string_is(char *s, int (*char_is)(int))
{
	int	i = 0;

	if (!s)
		return (false);
	while(s[i])
	{
		if (!char_is(s[i]))
			return (0);
		i++;
	}
	return (1);
}
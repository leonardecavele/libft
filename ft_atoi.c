/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:54:12 by ldecavel          #+#    #+#             */
/*   Updated: 2025/11/14 14:05:09 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	uint64_t	result;
	size_t		i;
	char		sign;

	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	sign = 1;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i++] - '0';
		if (result >= LONG_MAX && sign > 0)
			return (-1);
		else if (result >= (uint64_t)(LONG_MAX) + 1 && sign < 0)
			return (0);
	}
	return (result * sign);
}

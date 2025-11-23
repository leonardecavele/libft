/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:23:18 by ldecavel          #+#    #+#             */
/*   Updated: 2025/11/23 19:27:10 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define LBYTE 0x0101010101010101
#define FBYTE 0x8080808080808080

size_t	ft_strlen(const char *s)
{
	size_t	map;
	char	*start;

	start = (char *)s;
	while (*s && (uintptr_t)s % sizeof(size_t))
		s++;
	while (*s)
	{
		map = *((size_t *)s);
		map = (map - LBYTE) & ~map & FBYTE;
		if (map)
			break ;
		s += sizeof(size_t);
	}
	while (*s && !(map & 0xff))
	{
		s++;
		map >>= 8;
	}
	return (s - start);
}

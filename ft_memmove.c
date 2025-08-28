/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:34:31 by ldecavel          #+#    #+#             */
/*   Updated: 2025/08/28 11:22:58 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	r_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((t_u8p)dst)[i] = ((t_u8p)src)[i];
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		r_memcpy(dst, src, n);
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

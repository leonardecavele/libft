/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:34:31 by ldecavel          #+#    #+#             */
/*   Updated: 2025/08/22 23:38:01 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	r_cpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		r_cpy(dst, src, n);
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

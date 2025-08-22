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

static void	r_cpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		r_cpy(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:03:53 by ldecavel          #+#    #+#             */
/*   Updated: 2025/11/11 16:13:17 by ldecavel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		len;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	len = size * nmemb;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (len--)
		((uint8_t *)ptr)[len] = 0;
	return (ptr);
}

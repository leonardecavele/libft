/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:24:24 by ldecavel          #+#    #+#             */
/*   Updated: 2025/11/11 15:56:20 by ldecavel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = -1;
	while (s[++len])
		;
	len++;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (len--)
		ptr[len] = s[len];
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:21:54 by ldecavel          #+#    #+#             */
/*   Updated: 2025/11/04 15:47:29 by ldecavel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((t_u8)s1[i] && i + 1 < n && (t_u8)s1[i] == (t_u8)s2[i])
		i++;
	return ((t_u8)s1[i] - (t_u8)s2[i]);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!(*needle))
		return ((char *)haystack);
	if (!len)
		return (NULL);
	needle_len = -1;
	while (needle[++needle_len])
		;
	i = -1;
	while (haystack[++i] && i + needle_len <= len)
		if (strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);
	return (0);
}

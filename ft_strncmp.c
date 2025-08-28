/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 09:04:24 by ldecavel          #+#    #+#             */
/*   Updated: 2025/08/28 15:48:15 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((t_u8)s1[i] && i + 1 < n && (t_u8)s1[i] == (t_u8)s2[i])
		i++;
	return ((t_u8)s1[i] - (t_u8)s2[i]);
}

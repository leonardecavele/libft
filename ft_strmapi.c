/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:51:46 by ldecavel          #+#    #+#             */
/*   Updated: 2025/08/30 11:28:10 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = malloc (ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (s[++i])
		ptr[i] = (*f)(i, s[i]);
	ptr[i] = 0;
	return (ptr);
}

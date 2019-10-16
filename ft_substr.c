/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:03:13 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/15 12:39:43 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	size_t			i;

	i = 0;
	if ((int)ft_strlen((char *)s) < (int)start)
		return (NULL);
	if (!(dst = malloc(len + 1)))
		return (NULL);
	while (i < len && s[i])
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

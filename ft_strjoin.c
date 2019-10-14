/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:33:52 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/14 12:22:31 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;
	int		c;

	i = ft_strlen((char *)s1);
	j = i + ft_strlen((char *)s2);
	c = 0;
	if (!(dst = malloc(sizeof(char *) * j + 1)))
		return (NULL);
	ft_memcpy(dst, s1, i);
	while (i < j)
	{
		dst[i] = s2[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (dst);
}

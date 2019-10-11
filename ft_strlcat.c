/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:19:04 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 13:24:40 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen((char *)src);
	j = ft_strlen(dst);
	k = 0;
	if (j < dstsize)
	{
		while (k < dstsize - j - 1 && src[k])
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
	}
	else if (dstsize <= j)
		return (i + dstsize);
	return (i + j);
}

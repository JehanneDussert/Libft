/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:19:04 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/14 11:43:32 by jdussert         ###   ########.fr       */
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
	if (dstsize >= j)
	{
		while (k < dstsize - j - 1 && src[k])
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
		return (i + j);
	}
	else
		return (i + dstsize);
}

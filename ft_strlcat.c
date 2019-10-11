/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:19:04 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:43:46 by jdussert         ###   ########.fr       */
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
		while(k < dstsize - j - 1 && src[k])
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
	}
	else if (dstsize <= j)
		return(i + dstsize);
	return(i + j);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%s%s\n", av[1], av[2]);
		printf("%zu\n", ft_strlcat(av[1], av[2], atoi(av[3])));
		printf("%lu", strlcat(av[1], av[2], atoi(av[3])));
	}
	return (0);
}

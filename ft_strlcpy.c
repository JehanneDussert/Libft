/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:27:02 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:44:17 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (j < dstsize - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return(i);
}

int	main(void)
{
	char *dst;
	char *dst1;

	dst = malloc(20);
	dst1 = malloc(20);

	printf("%d\n%s\n", (int)ft_strlcpy("f", "boyarder", 5), dst);
	printf("%d\n%s\n", (int)strlcpy("f", "boyarder", 5), dst1);
}

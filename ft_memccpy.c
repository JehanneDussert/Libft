/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:47:04 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:40:41 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char *)dst = *(char *)src;
		if (*(char *)src == (char)c)
			return(++dst);
		dst++;
		src++;
		i++;
	}
	return(NULL);
}

int	main()
{
	void *tab1;
	char *tab2;
	tab1 = malloc(30);
	tab2 = "Hey";

	printf("%s\n", ft_memccpy(tab1, tab2, 'e', 6));
	printf("%s", memccpy(tab1, tab2, 'e', 6));
}

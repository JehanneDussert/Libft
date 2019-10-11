/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:30:18 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:41:28 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return(((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}

int	main()
{	
	printf("%d\n", ft_memcmp("", "", 2));
	printf("%d\n", ft_memcmp("Cool", "1", 1));
	printf("%d\n", ft_memcmp("Hello", "Hello toi", 7));
	printf("%d", ft_memcmp("12345", "{}", 0));
}

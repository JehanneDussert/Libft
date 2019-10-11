/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:11:11 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:41:08 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(char *)s == (char)c)
			return((void *)s);
		s++;
		n--;
	}
	return(NULL);
}

int	main()
{
	printf("%s\n", ft_memchr("Hello", 'y', 4));
	printf("%s", memchr("Hello", 'y', 4));
}

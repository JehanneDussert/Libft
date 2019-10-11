/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:24:59 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:49:19 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];
	
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	return(dst);
}

int	main()
{
	char	str[] = "Coucou c'est moi\0";
	const char	*src;
	char	*dst;
	size_t len;

	len = 30;
	src = &str[0];
	dst = &str[2];
	printf("%s", ft_memmove(dst, src, len));
	return (0);
}

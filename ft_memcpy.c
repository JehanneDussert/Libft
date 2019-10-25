/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:19:03 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/25 15:37:39 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!n || src == dst)
		return (dst);
	while (i < n)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		i++;
	}
	return (dst - i);
}

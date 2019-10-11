/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:53:55 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 14:20:05 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	if (!(tab = (unsigned char *)malloc(size * count)))
		return (NULL);
	while (i < count * size)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}

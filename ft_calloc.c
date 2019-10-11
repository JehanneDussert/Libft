/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:53:55 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:37:35 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *tab;
	size_t i;
	
	i = 0;
	if (!(tab = malloc(sizeof(size)*count)))
		return(NULL);
	while (i < count)
	{
		tab[i] = 0;
		i++;
	}
	return(tab);
}

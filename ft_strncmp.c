/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:48:51 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/25 16:00:43 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		count = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (count != 0)
			return (count);
		i++;
	}
	return (0);
}

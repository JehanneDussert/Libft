/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:59:19 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 13:23:20 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	a = (unsigned char)(c);
	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == a)
			return ((char *)&(s[i]));
		i--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:34:34 by jdussert          #+#    #+#             */
/*   Updated: 2020/02/12 16:37:42 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_first(char *haystack, char *needle)
{
	int	len_h;
	int	len_n;
	int	i;

	i = 0;
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	while (i++ < len_n && i < len_h && haystack[i] == needle[i])
		if (i == len_n)
			return (1);
	return (0);
}

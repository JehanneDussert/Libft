/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:05:49 by jdussert          #+#    #+#             */
/*   Updated: 2020/02/10 14:47:43 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_last(char *haystack, char *needle)
{
	int len_h;
	int len_n;

	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	while (len_n-- > 0 && len_h-- > 0 && haystack[len_h] == needle[len_n])
		if (len_n == 0)
			return (1);
	return (0);
}

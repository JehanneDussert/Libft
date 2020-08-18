/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ref_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:22:58 by jdussert          #+#    #+#             */
/*   Updated: 2020/08/14 13:58:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ref_parse(char *haystack, const char *needle, size_t len, int *i)
{
	size_t	j;

	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (*i < (int)len && haystack[j] != '\0' && needle[j] != '\0'
			&& needle[j] == haystack[j])
	{
		(*i)++;
		j++;
		if (needle[j] == '\0')
			return (&haystack[j]);
	}
	return (NULL);
}

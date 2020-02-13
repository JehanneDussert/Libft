/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ref_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:22:58 by jdussert          #+#    #+#             */
/*   Updated: 2020/02/13 13:47:55 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ref_parse(char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return (haystack);
	while (i < len && haystack[i] != '\0' && needle[i] != '\0'
			&& needle[i] == haystack[i])
	{
		i++;
		if (needle[i] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:03:13 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/24 10:10:48 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	size_t		i;
	size_t		s_len;

	i = 0;
	if (s)
	{
		s_len = ft_strlen((char *)s);
		if ((dst = (char *)ft_calloc(len + 1, sizeof(*dst))) == NULL)
			return (NULL);
		if (start < s_len)
			while (i < len && s[start])
				dst[i++] = s[start++];
		return (dst);
	}
	else
		return (NULL);
}

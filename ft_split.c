/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:05:47 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/25 16:43:53 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	s_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char		**ft_cpy(char **dst, char const *s, char c, int len)
{
	int		i;

	i = 0;
	while (*s && i < len)
	{
		while (*s == c && *s)
			s++;
		if (!(dst[i] = malloc(sizeof(char) * (s_len(s, c) + 1))))
			return (NULL);
		dst[i++] = ft_substr(s, 0, s_len(s, c));
		while (*s && *s != c)
			s++;
	}
	dst[i] = NULL;
	return (dst);
}

char		**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	if (!(dst = malloc(sizeof(dst) * (len + 1))))
		return (NULL);
	ft_cpy(dst, s, c, len);
	return (dst);
}

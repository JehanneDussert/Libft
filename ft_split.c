/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:06:31 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/21 16:59:02 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_of_words(const char *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
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
	return (len + 1);
}

static char	**s_cpy(char **dst, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[j])
	{
		k = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			dst[i][k++] = s[j++];
		if (s[j - 1] != c)
			dst[i++][k] = '\0';
	}
	dst[i] = NULL;
	return (dst);
}

static char	**dst_malloc(char **dst, const char *s, char c, int max)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			len = s_len(&s[j], c);
			j += len;
			if (i < max)
				if (!(dst[i++] = (char *)malloc(sizeof(char) * len)))
				{
					while (i-- > 0)
						free(dst[i]);
					free(dst);
					return (NULL);
				}
		}
	}
	return (dst);
}

char		**ft_split(char const *s, char c)
{
	char	**dst;
	int		max;

	if (!s)
		return (NULL);
	max = nb_of_words(s, c);
	if (!(dst = (char **)malloc(sizeof(char *) * (max + 1))))
		return (NULL);
	dst_malloc(dst, s, c, max);
	s_cpy(dst, s, c);
	return (dst);
}

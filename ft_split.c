/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:00:53 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/14 18:25:22 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i + 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (s[length] != c && s[length])
		length++;
	return (length);
}

static void	ft_free_dst(char **dst, size_t i)
{
	while (i--)
		free(dst[i]);
	free(dst);
}

static char	**ft_cpy(char const *s, char c, curseur)
{
	int	j;
	j = 0;
	while(*s && *s != c)
		dst[curseur][j++] = *s++;
	dst[curseur++][j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int	i;

	i = 0;
	if (!(dst = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1)))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			if (!(dst[i] = (char *)malloc(sizeof(char)
				* (ft_length(s, c) + 1))))
			{
				ft_free_dst(dst, i);
				return (NULL);
			}
			ft_cpy(s, c, i);
		}
	}
	dst[i] = NULL;
	return (dst);
}

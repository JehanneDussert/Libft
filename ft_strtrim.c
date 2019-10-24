/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:04:44 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/24 09:54:06 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	else if (!set)
		return ((char *)s1);
	i = 0;
	while (*s1 && ft_strchr((char *)set, *s1))
		s1++;
	len = ft_strlen((char *)s1);
	while (len && ft_strchr((char *)set, s1[len - 1]))
		len--;
	if (!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (i < len && *s1 != '\0')
		str[i++] = *(s1++);
	str[i] = '\0';
	return (str);
}

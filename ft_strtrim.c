/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:04:44 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/16 11:21:06 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen((char *)s1);
	if (!(str = malloc(len) + 1))
		return (NULL);
	while (ft_strchr((char *)set, *s1))
		s1++;
	while (ft_strchr((char *)set, s1[len - 1]))
		len--;
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:09:34 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/16 10:20:19 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	*result;

	result = (char *)s;
	while (*result != c)
	{
		if (*result == '\0')
			return (NULL);
		result++;
	}
	return (result);
}

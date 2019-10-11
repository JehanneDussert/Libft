/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:45:05 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:45:11 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			j = 1;
			while (i + j < len && haystack[i+j]  == needle[j] && needle[j] != '\0')
				j++;
			if (needle[j] == '\0')
				return((char *)&haystack[i]);
		}
		i++;
	}
	return(NULL);
}

int	main()
{
	printf("%s\n", ft_strnstr("123", "2", 10));
	printf("%s\n", strnstr("123", "2", 10));

	printf("%s\n", strnstr("hellolol", "lol", 5));
	printf("%s\n", strnstr("hellolol", "lol", 5));
}

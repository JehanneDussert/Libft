/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:09:34 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/07 19:06:01 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	char a;
	int i;

	a = (char)(c);
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == a)
			return(&*s);
		i++;
	}
	if (s[i] == '\0')
		return(&*s);
	return(0);
}

int		main()
{
	printf("%s\n", ft_strchr("5 yo", 'y'));
}

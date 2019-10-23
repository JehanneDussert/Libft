/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:30:07 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/21 09:33:55 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*nbr_is_zero(void)
{
	char	*str;

	if (!(str = malloc(sizeof(char *) * 2)))
		return (NULL);
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

int		str_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr / 10 != 0 && i++ < 10)
		nbr /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	len = str_len(n) + 1;
	if (n == 0)
		return (nbr_is_zero());
	else
	{
		nb = (long int)n;
		if (n < 0)
			nb *= -1;
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		str[len] = '\0';
		if (n < 0)
			str[0] = '-';
		while (nb > 0)
		{
			str[--len] = (nb % 10 + 48);
			nb /= 10;
		}
	}
	return (str);
}

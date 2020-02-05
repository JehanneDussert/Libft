/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:28:16 by jdussert          #+#    #+#             */
/*   Updated: 2019/12/18 11:24:29 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nbr_is_zero(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

static int	ft_str_len(long int nbr, int base)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr != 0 && i++ < base)
		nbr /= base;
	return (i);
}

char		*ft_itoa_base(long int n, int base, char *tab)
{
	char		*str;
	int			len;
	long int	tmp;

	len = ft_str_len(n, base);
	if (n == 0)
		return (ft_nbr_is_zero());
	else
	{
		tmp = n;
		if (n < 0)
			tmp *= -1;
		if (!(str = (char *)malloc(sizeof(char) * len)))
			return (NULL);
		str[len] = '\0';
		if (n < 0)
			str[0] = '-';
		while (len > 0 && tmp != 0)
		{
			str[--len] = tab[tmp % base];
			tmp /= base;
		}
	}
	return (str);
}

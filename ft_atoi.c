/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:24:39 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/25 15:33:11 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				count;

	i = 0;
	result = 0;
	count = 1;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r' ||
				str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		count = -count;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * count);
}

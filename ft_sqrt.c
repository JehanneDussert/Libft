/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:24:56 by jdussert          #+#    #+#             */
/*   Updated: 2020/03/12 12:25:37 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcul la racine carree d'un nombre
*/

int		ft_sqrt(int n)
{
	int	sqrt;

	if (n < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < n)
		++sqrt;
	if (sqrt * sqrt == n)
		return (sqrt);
	return (0);
}

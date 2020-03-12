/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rounded_down.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:26:14 by jdussert          #+#    #+#             */
/*   Updated: 2020/03/12 12:26:38 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Arrondir un nombre flottant
*/

int		ft_rounded_down(float f)
{
	int res;

	res = ((float)((int) f * 100)) / 100;
	return (res);
}
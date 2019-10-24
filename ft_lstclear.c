/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:48:06 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/23 17:06:26 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = *lst;
	while (tmp2 != NULL)
	{
		tmp = tmp2->next;
		ft_lstdelone(tmp2, del);
		tmp2 = tmp;
	}
	*lst = NULL;
}

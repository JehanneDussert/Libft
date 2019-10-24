/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:20:31 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/24 09:29:17 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*begin;

	begin = lst;
	if (lst)
	{
		if (!(new_list = malloc(sizeof(t_list))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_list->next = f(lst);
		new_list->next = ft_lstmap(lst->next, f, del);
		return (new_list);
	}
	begin = NULL;
	return (begin);
}

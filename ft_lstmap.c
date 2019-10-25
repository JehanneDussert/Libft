/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:20:31 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/25 12:52:56 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_creation(t_list *lst, t_list *new_list, void *(*f)(void *))
{
	t_list	*lolxd;

	lolxd = new_list;
	while (lst)
	{
		if (!(lolxd = ft_lstnew(f(lst->content))))
			return (NULL);
		ft_lstadd_back(&new_list, lolxd);
		lst = lst->next;
	}
	return (new_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	newlist = NULL;
	if (!(newlist = ft_list_creation(lst, newlist, f)))
	{
		ft_lstclear(&newlist, del);
		return (NULL);
	}
	return (newlist);
}

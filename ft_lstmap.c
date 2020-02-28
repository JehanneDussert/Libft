/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:20:31 by jdussert          #+#    #+#             */
/*   Updated: 2020/02/17 17:43:46 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_creation(t_list *lst, t_list *new_list, void *(*f)(void *))
{
	t_list	*new;

	new = new_list;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			return (NULL);
		ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = NULL;
	if (!(new_list = ft_list_creation(lst, new_list, f)))
	{
		ft_lstclear(&new_list, del);
		return (NULL);
	}
	return (new_list);
}

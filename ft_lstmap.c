/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:20:31 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/23 13:58:12 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	while (lst)
	{
		if (!(new_list = malloc(sizeof(t_list))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		f(lst->content);
		new_list = lst->content;
		lst = lst->next;
		new_list = new_list->next;
	}
	return (new_list);
}

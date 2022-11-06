/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 02:48:24 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/25 14:18:35 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*l;
	
	l = NULL;
	if (!lst)
		return (0);
	while (lst)
	{
		if(!(node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&l,del);
			return (0);
		}
		ft_lstadd_back(&l,node);
		lst = lst->next;
	}
	return (l);
}

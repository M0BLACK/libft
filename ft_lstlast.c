/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:04:42 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 16:53:54 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (0);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {

//     t_list *head = ft_lstnew("blal");
//     t_list *p1 = ft_lstnew("Node01");
//     t_list *p2 = ft_lstnew("Node02");
//     t_list *p3 = ft_lstnew("last");

//     head->next = p1;
//     p1->next = p2;
//     p2->next = p3;
//     printf("%s",ft_lstlast(head)->content);
// //     printf("%s", head->next->next->next->content);
// }

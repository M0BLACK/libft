/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 07:24:15 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 23:26:13 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!new)
		return ;
	while (!*lst)
	{
		*lst = new;
		return ;
	}
	p = ft_lstlast(*lst);
	p -> next = new;
}
// int main()
// {
//     t_list *head = ft_lstnew("blal");
//     t_list *p1 = ft_lstnew("Node01");
//     t_list *p2 = ft_lstnew("Node02");
//     t_list *p3 = ft_lstnew("last");

//     head->next = p1;
//     p1->next = p2;
//     ft_lstadd_back(&head,p3);
// 		ft_lstlast("head");
//     while (head->next)
//     {
//         printf("%s \n", head->content);
//         head = head->next;
//     }
// }

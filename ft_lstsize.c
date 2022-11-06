/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 06:09:52 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:03:26 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*l;

	l = lst;
	cnt = 0;
	if (!lst)
		return (0);
	while (l != NULL)
	{
		cnt++;
		l = l->next;
	}
	return (cnt);
}
// int main ()
// {
//     t_list *head = ft_lstnew("blal");
//     t_list *p1 = ft_lstnew("Node01");
//     t_list *p2 = ft_lstnew("Node02");
//     head->next = p1;
//     p1->next = p2;
//     int r =ft_lstsize(head);
//     printf("%d",r);
// }

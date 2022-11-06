/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:46:54 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 16:43:01 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		new -> next = NULL;
	}
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}
// int main()
// {
//     t_list *head =ft_lstnew("makhoufi");
//     t_list *ptr = ft_lstnew("bilal");
//     t_list *ptr2 = ft_lstnew("stof");   
//     head->next = ptr;
//     ft_lstadd_front(&head,ptr2);
//     printf("%s",head->content);
// }

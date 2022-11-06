/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:45:34 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/25 13:59:37 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include<stdio.h>

void f(void *s) {
	printf("%s\n",s);
}
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst-> content);
		lst = lst-> next;
	}
}

int main()
{
	t_list *head = ft_lstnew("boo");
	t_list *n1 = ft_lstnew("boow");
	t_list *n2 = ft_lstnew("bood");

	head->next = n1;
	n1->next = n2;

	ft_lstiter(head,f);

}
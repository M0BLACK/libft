/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:21:16 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/18 19:57:44 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main()
// {
//     int fd = open("foo.txt", O_RDWR | O_CREAT);
//     ft_putendl_fd("Bilal",fd);

//     printf("fd = %d", fd);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:53:04 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:12:20 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
}
// int main()
// {
//     int fd = open("fooqi.txt", O_RDWR | O_CREAT);
//     ft_putnbr_fd(-14888884,fd);

//     printf("fd = %d", fd);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:25:53 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 16:35:41 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

int	count_size(int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else if (n <= 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nbr;
	char	*str;
	char	size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	size = count_size(n);
	nbr = abs(n);
	str = malloc(size * sizeof(char) + 1);
	if (!str)
		return (0);
	str[size--] = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[0] = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
// int main()
// {
//     printf("%s", ft_itoa(88888886));
// }

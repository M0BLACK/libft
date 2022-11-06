/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:45:31 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/25 19:11:18 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	i;
	int	r;

	s = 1;
	r = 0;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if ((long long)(r * s) > 9223372036854775807)
		return (-1);
	else if ((long long)(r * s) < -9223372036854775807)
		return (0);
	return (r * s);
}
#include<stdio.h>
int main()
{
 char n[] =   "9223372036854775808";
		printf("%d",ft_atoi(n));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:06:57 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:34:22 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;
	size_t			i;

	s01 = (unsigned char *) s1;
	s02 = (unsigned char *) s2;
	i = 0;
	while ((s01[i] || s02[i]) && i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//     // int k = ft_strncmp("bilab","bilab",5);
//     //  int j = strncmp("bilab","bilab",5);
// 	// char *big = "abcdef";
//     // char *little = "abcdefghijklmnop";
//     // size_t size = 6;
//     printf("MINE: %d\n",ft_strncmp("saad", "",4));
//     printf("ORIGIN: %d", strncmp("saad", "",4));

// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:34:41 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/19 05:49:20 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	else
		return (0);
}
// int main()
// {
// 	char str[] = "HFHHYYGHDGtHHFYYSPNVNU;DF;HSJFJFEIY\0YYYUD";
//  	char *s = ft_strchr(s, 't' + 256);
//  	// char *s1 = strchr(str , 'S');
// }

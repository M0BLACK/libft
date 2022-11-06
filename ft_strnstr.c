/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:11:37 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 23:16:12 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *) haystack + i);
			}
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     // char b[20] = "teb";
//     // char a[] = "tebilalst";
//     // char *r = ft_strnstr(a,b,10);
// 	//ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
//     printf("%s", strnstr(haystack, needle, -1));

// }

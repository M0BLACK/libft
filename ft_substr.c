/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:11:23 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:43:45 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	string_len;

	i = 0;
	string_len = ft_strlen(s);
	if (start >= string_len)
		return (ft_strdup(""));
	if (string_len - start < len)
		len = string_len - start;
	p = malloc(len * sizeof(char) + 1);
	if (!p || !s)
		return (NULL);
	while (s[start] && i < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
// 	char str[] = "i just want this part #############";
//     size_t size = 20;

//     char *ret = ft_substr(str, 5, size);
//     // char *str = ft_substr("hola", 0, 3);
//     printf("%s", ret);
// }

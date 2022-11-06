/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:01:09 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:29:02 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	size_t	e;

	if (!dst && dstsize == 0)
		return (0);
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	e = len_d;
	i = 0;
	if (dstsize <= len_d)
		return (dstsize + len_s);
	while (src[i] && i < (dstsize - len_d - 1))
	{
		dst[e] = src[i];
		i++;
		e++;
	}
	dst[e] = '\0';
	return (len_d + len_s);
}
// int main()
// {
// 	size_t r = ft_strlcat("pqrs", "abcdefghi", 10);
// 	printf("%zu", r);
// }

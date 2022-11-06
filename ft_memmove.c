/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:43:48 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:56:36 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_d;
	char	*temp_s;
	size_t	i;

	temp_d = (char *)dst;
	temp_s = (char *)src;
	i = 0;
	if (temp_s == NULL && temp_d == NULL)
		return (0);
	if (temp_d < temp_s)
	{
		ft_memcpy(dst, src, len);
	}
	if (dst > src)
	{
		while (len--)
		{
			temp_d[len] = temp_s[len];
		}
	}
	return (dst);
}

// int main(void)
// {
//     char src[] = "#####saad_mney_1337_mk1fx#####";
//     // puts(src+15);
//     printf("%s\n" ,ft_memmove((src),(src+15),21));
//     puts(src+15);
//     //printf("%s\n" ,memmove((src),(src+5),21));
//     return(0);
// }

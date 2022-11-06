/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:52:34 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:04:52 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*nsrc;
	unsigned char	*ndst;
	size_t			i;

	nsrc = (unsigned char *) src;
	ndst = (unsigned char *) dst;
	i = 0;
	if (nsrc == NULL && ndst == NULL)
		return (NULL);
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
// int main(void)
// {
//     int src[] = {1,50000,5};

//     ft_memcpy(src, src+1,2);

//     for(int i = 0; i < 3; i++)
//         printf("dst[%d] = %d\n",i,src[i]);
//     puts("\nafter memcpy\n");
//     for(int i = 0; i < 3; i++)
//         printf("dst[%d] = %d\n",i,src[i]);
// }

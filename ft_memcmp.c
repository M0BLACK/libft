/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:31:29 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/18 20:24:38 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//    char	*s1 = "\xff\xaa\xde\x12";
//    char	*s2 = "\xff\xaa\xde\x12MACOSAAAAA";
//    int r  = memcmp(s1,s2,4);
//    int r1  = ft_memcmp(s1,s2,4);
//    printf("%d\n%d", r, r1);
// }

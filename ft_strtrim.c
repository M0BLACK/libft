/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:20:01 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/24 17:42:10 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lenstr = ft_strlen(s1);
	while (lenstr && ft_strchr(set, s1[lenstr]))
		lenstr--;
	return (ft_substr(s1, 0, lenstr + 1));
}
// int main ()
// {
// 	char *s1 = "Please\n Trim me !  P";
//     // char *s2 = "Hello \t  Please\n Trim me !";

//         char *ret = ft_strtrim(s1, " Ple");
//    printf("%s", ret);
// }

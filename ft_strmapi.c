/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:43:09 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/21 22:36:16 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*p;
	char	*s1;

	s1 = (char *) s;
	p = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
//     char p[] = "ANA";
//     printf("%s", ft_strmapi(p,&f));

// }

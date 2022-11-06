/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:51:10 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/10/25 14:35:15 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_words(const char *str, char c)
{
	int	t;
	int	counter;

	t = 0;
	counter = 0;
	while (*str)
	{
		if (*str != c && t == 0)
		{
			t = 1;
			counter++;
		}
		else if (*str == c)
			t = 0;
		str++;
	}
	return (counter);
}

static char	*set_word(const char *str, int begin, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - begin + 1) * sizeof(char));
	while (begin < end)
		word[i++] = str[begin++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**arr;

	arr = malloc((number_of_words(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (0);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			arr[j++] = set_word(s, start, i);
			start = -1;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
	// int main()
	// {  
	// 	char **str =ft_split(" ", ' ');
	// 	int k = 0;
	// 	while (str[k])
	// 	{
	// 		printf("%s\n", str[k]);
	// 		k++;
	// 	}
	// 	return(0);
	// }

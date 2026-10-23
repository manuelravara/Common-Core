/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:36:22 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:36:23 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (words);
}

static void	ft_free(char **array, int position)
{
	int	i;

	i = 0;
	while (i < position)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static void	ft_fill_array(char **array, char const *s, char c)
{
	size_t	len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (len)
		{
			array[j] = ft_substr(s, i - len, len);
			if (!array[j])
				ft_free(array, j);
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**dest;

	if (!s)
		return (NULL);
	words = 0;
	words = ft_count_words(s, c);
	dest = (char **) malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest[words] = NULL;
	ft_fill_array(dest, s, c);
	return (dest);
}
/*
int	main(void)
{
	char src[] = " this is--a--string--for you-to-split. ";
	char c = '-';
	char **dest = ft_split(src, c);
	int i;
	int j;
	int words = count_words(src, c);

	j = 1;
	i = 0;
	while (dest[i] && j <= words)
	{
		printf("word[%d] = %s\n", j, dest[i]);
		i++;
		j++;
	}
}
*/

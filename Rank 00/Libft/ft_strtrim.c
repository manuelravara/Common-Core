/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:38:50 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:38:51 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_found_char(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_found_char(set, s1[i]))
	{
		i++;
	}
	while (i < len && ft_found_char(set, s1[len]))
	{
		len--;
	}
	dest = (char *) malloc(sizeof(*s1) * (len - i + 2));
	if (!dest)
		return (NULL);
	while (i <= len)
	{
		dest[j++] = s1[i++];
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main(void)
{
    char string[] = "# !This is a string! #";
    char set[] = "!#";
    char *result;

    result = ft_strtrim(string, set);
    printf("%s\n", result);

	char *strtrim;
	char s1[] = "lorem ipsum dolor sit amet";
	if (!(strtrim = ft_strtrim(s1, "te")))
		printf("NULL\n");
	else
		printf("%s\n", strtrim);
	if (strtrim == s1)
		printf("\nA new string was not returned");
}*/

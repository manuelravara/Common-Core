/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:36:37 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:36:38 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	// char	string[] = "This is @ string.";
	// int		a = 'i';
	// if (strchr(string, a) == NULL && ft_strchr(string, a) == NULL)
	// 	printf("NULL\n");
	// else
	// {
	// 	printf("%s\n", strchr(string, a));
	// 	printf("%s\n", ft_strchr(string, a));
	// }
	////
	// char	str2[] = "bonjour";
	// char	*str_2;
	// if (!(str_2 = ft_strchr(str2, '\0')))
	// 	printf("null\n");
	// else
	// 	printf("%s\n", str_2);
	// ////
	// char	str3[] = "";
	// char	*str;
	// if (!(str = ft_strchr(str3, '\0')))
	// 	printf("null\n");
	// else
	// 	printf("%s\n", str);
	////
	// char s[] = "tripouille";
	// char *str1;
	// str1 = ft_strchr(s, 't' + 256);
	// printf("%s\n", str1);
	////
	char b[] = "tripouille";
	char *b1;

	b1 = strchr(b, 't' + 256);
	if (!b1)
		printf("null\n");
	else
		printf("%s\n", b1);
	// printf("%c", c);
	// b1 = ft_strchr(b, 't' + 256 + 256 + 256);
	
}*/

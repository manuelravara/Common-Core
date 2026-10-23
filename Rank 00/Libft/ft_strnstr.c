/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:38:26 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:38:27 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*little))
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
			j++;
		if (!(little[j]))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	// char *s1 = "This is a string";
	// char *s2 = "TH";
	// size_t max = strlen(s1);

	// if (ft_strnstr(s1, s2, max) == NULL)
	// 	printf("NULL\n");
	// else
	// 	printf("%s\n", ft_strnstr(s1, s2, max));
	
	// const char *str;
	// if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
	// 	printf("null\n");
	// else
	// 	printf("%s\n", str);

	char *empty = "";

	if (ft_strnstr(empty, "", -1) == empty)
		printf("1");
	else
		printf("0");
	printf("\n");
	if (ft_strnstr(empty, "", 0) == empty)
		printf("1");
	else
		printf("0");
	printf("\n");
}*/

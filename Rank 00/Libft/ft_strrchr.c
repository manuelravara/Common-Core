/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:38:39 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:38:40 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	string[] = "This is @ string.";
	int		a = 'i';

	if (strrchr(string, a) == NULL && ft_strrchr(string, a) == NULL)
		printf("NULL\n");
	else
	{
		printf("%s\n", strrchr(string, a));
		printf("%s\n", ft_strrchr(string, a));
	}
}*/

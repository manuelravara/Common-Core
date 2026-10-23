/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:37:42 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:37:46 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int	main(void)
{
	char src[] = "This is the string to copy.";
	char dest1[30];
	char dest2[30];

	printf("length src: %ld\n", strlen(src));
	printf("result: %ld - %s\n", ft_strlcpy(dest1, src, 30), dest1);
	printf("result: %ld - %s\n", strlcpy(dest2, src, 30), dest2);
	return(0);
}*/

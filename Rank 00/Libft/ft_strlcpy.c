/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:37:42 by mravara           #+#    #+#             */
/*   Updated: 2026/11/16 11:26:21 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
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

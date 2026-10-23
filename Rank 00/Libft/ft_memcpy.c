/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:34:59 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:35:02 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char	src_1[] = "copy this";
	char	src_2[] = "and also this";
	char	dest[100];

	// memcpy(dest, src_1, strlen(src_1) + 1);
	printf("result: %p\n", memcpy(dest, src_1, strlen(src_1) + 1));
	printf("source: %s\n", src_1);
	printf("destination: %s\n\n", dest);

	// ft_memcpy(dest, src_2, strlen(src_2) + 1);
	printf("result: %p\n", ft_memcpy(dest, src_2, strlen(src_2) + 1));
	printf("source: %s\n", src_2);
	printf("destination: %s\n", dest);
}*/

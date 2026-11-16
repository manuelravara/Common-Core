/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:34:33 by mravara           #+#    #+#             */
/*   Updated: 2026/11/16 12:12:38 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	arr1[] = "This is a string.";
	int arr2[] = {1, 2};
	int c = 's';
	char	*dest;

	dest = ft_memchr(arr1, c, 10);
	if ((memchr(arr1, c, 10) != NULL)
		&& ft_memchr(arr1, c, 10) != NULL)
		printf("%s\n", dest);
	else {
		printf("Did not find the byte\n");
	}
	if ((memchr(arr2, c, sizeof(int) * 2) != NULL)
		&& ft_memchr(arr2, c, sizeof(int) * 2) != NULL)
		printf("Found the byte\n");
	else {
		printf("Did not find the byte\n");
	}
	return 0;
}*/

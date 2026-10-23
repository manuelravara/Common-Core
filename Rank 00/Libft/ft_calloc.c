/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:30:55 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:30:56 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	n;

	n = nmemb * size;
	if (nmemb && n / nmemb != size)
		return (NULL);
	dest = malloc(n);
	if (!dest)
		return (NULL);
	ft_bzero(dest, n);
	return (dest);
}
/*
int main(void)
{
	// int	*array1;
	// array1 = calloc(1000, sizeof(int));
	// for (int i = 0; i < 1000; i++)
	// 	printf("%d", array1[i]);
	// free(array1);
	// printf("\n");

	// int	*array2;
	// array2 = ft_calloc(1000, sizeof(int));
	// for (int i = 0; i < 1000; i++)
	// 	printf("%d", array2[i]);
	// free(array2);
	// printf("\n");
	// return (0);

	if (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL)
		printf("1");
	else
		printf("0");
	printf("\n");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:35:20 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:35:22 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	char	buffer[10];

	printf("%p\n", memset(buffer, 'a', 10));
	printf("%s\n", buffer);
	printf("%p\n", ft_memset(buffer, 'b', 5));
	printf("%s\n", buffer);
}*/

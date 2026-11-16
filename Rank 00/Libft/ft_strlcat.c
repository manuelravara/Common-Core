/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:37:31 by mravara           #+#    #+#             */
/*   Updated: 2026/11/16 11:22:09 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(src);
	len_dest = 0;
	while (len_dest < size && dest[len_dest])
		len_dest++;
	if (size == len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}
/*
int	main()
{
	char src[] = "aaaaaa";
	char dest[12] = "abcdef";
	size_t size = 12;

	printf("length src: %ld\n", ft_strlen(src));
	printf("length dest: %ld\n", ft_strlen(dest));
	printf("%ld\n", ft_strlcat(dest, src, size));
	printf("%ld\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("length after concatenation: %ld\n\n", ft_strlen(dest));

	char *d;
	if (!(d = (char *)malloc(sizeof(*d) * 15)))
		return (0);
	memset(d, 0, 15);
	memset(d, 'r', 6);
	d[11] = 'a';
	write(1, d, 15);
	write(1, "\n", 1);
	printf("%ld\n", ft_strlcat(d, "lorem", 15));
	write(1, d, 15);
}*/

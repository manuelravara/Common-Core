/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:35:09 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:35:11 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *) src;
	d = (char *) dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (d);
}
/*
int	main(void)
{
	char	source1[12] = "Geeksfor";
	char	source2[12] = "Geeksfor";
	char	destination[8];

	memmove(destination, source1, strlen(source1)+1);
	ft_memmove(destination, source2, strlen(source2)+1);
	printf("%s\n", source1);
	printf("%s\n", source2);

	/////////////////////////////////////////////

	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;
	if (src != ft_memmove(src, dest, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
	write(1, "\n", 1);

	/////////////////////////////////////////////

	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	// char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	// char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	int	i;
	ft_memmove(s0, s, 7);
	for (i = 0; i < 7; i++) {
		printf("%d - %d\n", s[i], s0[i]);
	}
	printf("\n");
	ft_memmove(sResult, s, 7);
	for (i = 0; i < 7; i++) {
		printf("%d - %d\n", s[i], sResult[i]);
	}
}*/

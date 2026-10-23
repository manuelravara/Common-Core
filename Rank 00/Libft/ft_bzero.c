/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:30:46 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:30:47 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	buffer1[10] = "0123456789";
	char	buffer2[10] = "0123456789";

	printf("%s\n", buffer1);
	bzero(buffer1, sizeof(char) * 10);
	printf("%s\n", buffer1);

	printf("%s\n", buffer2);
	ft_bzero(buffer2, sizeof(char) * 10);
	printf("%s\n", buffer2);
}*/

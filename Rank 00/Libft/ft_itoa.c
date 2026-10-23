/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:32:00 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:32:01 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	dest = (char *) malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
		dest[0] = '0';
	while (nbr)
	{
		dest[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (dest);
}
/*
int main(void)
{
	int	a = 12345;
	int b = 0;
	int c = -23456;
	int d = -2147483648;
	int e = 2147483647;
    char *dest;

	dest = ft_itoa(a);
    printf("%s\n", dest);
	dest = ft_itoa(b);
    printf("%s\n", dest);
	dest = ft_itoa(c);
    printf("%s\n", dest);
	dest = ft_itoa(d);
    printf("%s\n", dest);
	dest = ft_itoa(e);
    printf("%s\n", dest);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:30:36 by mravara           #+#    #+#             */
/*   Updated: 2026/11/16 12:22:10 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	signal;

	number = 0;
	signal = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	return (number * signal);
}
/*
int	main(void)
{
	const char *number = " 	-2147483648";
	printf("%d\n", ft_atoi(number));
	printf("%d\n", atoi(number));

	const char *number2 = " 	-+48";
	printf("%d\n", ft_atoi(number2));
	printf("%d\n", atoi(number2));
}*/

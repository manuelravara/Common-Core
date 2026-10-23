/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:36:00 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:36:04 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr_fd((num / 10), fd);
		c = (num % 10) + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = num + '0';
		write(fd, &c, 1);
	}
}
/*
int main(void)
{
    ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);
    ft_putnbr_fd(12345, 2);
	write(2, "\n", 1);
}*/

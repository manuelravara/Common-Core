/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:35:38 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:35:40 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    char c;

    c = 'm';
    ft_putchar_fd(c, 1);
	printf("\n");
    ft_putchar_fd(c, 2);
	printf("\n");
}
*/

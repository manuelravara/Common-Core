/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:39:40 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:39:41 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i++], 1);
		}
	}
}
/*
int main(void)
{
    char str[] = "Print this string!";

    ft_putstr_fd(str, 1);
	printf("\n");
    ft_putstr_fd(str, 2);
	printf("\n");
}
*/

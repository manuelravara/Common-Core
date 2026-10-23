/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:40:10 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:40:11 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int		main(void)
{
	int		c;

	c = ' ';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}*/

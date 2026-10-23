/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:32:55 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:32:57 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
int	main(void)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (1);
	new_node->content = malloc(sizeof(int));
	if (!new_node->content)
	{
		free(new_node);
		return (1);
	}
	*(int*)new_node->content = 123;
	new_node->next = NULL;

	ft_lstdelone(new_node, free);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:32:24 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:32:25 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list **head = NULL;
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

	ft_lstadd_front(head, new_node);
}*/

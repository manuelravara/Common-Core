/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:34:20 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:34:24 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	head = NULL;
// 	printf("Empty list size: %u (Expected: 0)\n", ft_lstsize(head));

// 	node1 = ft_lstnew("First");
// 	node2 = ft_lstnew("Second");
// 	node3 = ft_lstnew("Third");

// 	ft_lstadd_front(&head, node1);
// 	printf("1 node size: %u (Expected: 1)\n", ft_lstsize(head));

// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	printf("3 nodes size: %u (Expected: 3)\n", ft_lstsize(head));

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
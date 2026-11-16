/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <mravara@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:33:46 by mravara           #+#    #+#             */
/*   Updated: 2026/10/23 11:33:47 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	while (lst)
	{
		temp = lst;
		lst = lst->next;
	}
	return (temp);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last;

// 	head = NULL;
// 	last = ft_lstlast(head);
// 	printf("Empty list: %p (Expected: 0x0 / nil)\n", (void *)last);

// 	node1 = ft_lstnew("Last node");
// 	node2 = ft_lstnew("Middle node");
// 	node3 = ft_lstnew("First node");

// 	ft_lstadd_front(&head, node1);
// 	last = ft_lstlast(head);
// 	printf("1 node list: %s (Expected: Last node)\n", (char *)last->content);

// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	last = ft_lstlast(head);
// 	printf("3 node list: %s (Expected: Last node)\n", (char *)last->content);

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
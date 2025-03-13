/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:09:42 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/04 17:03:36 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;
	t_list	*new_lst;

	ptr = lst;
	node = NULL;
	new_lst = node;
	while (ptr != NULL)
	{
		node = ft_lstnew(f(ptr->content));
		if (!node)
		{
			del(node);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		ptr = ptr->next;
	}
	return (new_lst);

// Iterates over list
// Applies f on the content
//
// Creates a new list with the new values
//
// del is used to deleted the content of a node if needed
// if allocation fails at any point, we use ft_lstclear(&new_lst, free);
//
// return the NEW list, or NULL if alloc fails
}

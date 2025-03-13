/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:36:44 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/04 09:15:54 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*to_del;

	if (*lst)
	{
		ptr = *lst;
		to_del = ptr;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			del(to_del->content);
			del(to_del);
			to_del = ptr;
		}
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:54:26 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/27 17:57:01 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*ptr;

	counter = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:33:15 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/27 17:36:03 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		mult;
	void		*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	mult = nmemb * size;
	if (nmemb > INT_MAX / size)
		return (NULL);
	ptr = malloc(mult);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, mult);
	return (ptr);
}

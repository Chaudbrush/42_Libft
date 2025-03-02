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
	size_t	mult;
	void	*ptr;

	if ((int)nmemb < 0 || (int)size < 0)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		*(char *)ptr = '1';
		return (ptr);
	}
	mult = nmemb * size;
	if (mult > __INT_MAX__)
		return (NULL);
	ptr = malloc(mult);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, mult);
	return (ptr);
}

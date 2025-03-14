/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:32:28 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/28 10:42:13 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	if (d_ptr > s_ptr)
	{
		i = n;
		while (i > 0)
		{
			d_ptr[i - 1] = s_ptr[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d_ptr[i] = s_ptr[i];
			i++;
		}
	}
	return (dest);
}

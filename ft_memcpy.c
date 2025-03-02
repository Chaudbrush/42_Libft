/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:19:54 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/27 13:22:22 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	i = 0;
	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return (dest);
}

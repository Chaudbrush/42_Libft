/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:12:58 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/27 11:22:43 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	if (size < dst_len - 1)
		return (size + src_len);
	i = 0;
	while (src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + src_len);
}

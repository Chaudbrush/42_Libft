/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:25:58 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/26 18:41:34 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	*str = "Welcome to LA Lakers";
	char	dst[21];

	printf("dst: %ld, len: %s\n", ft_strlcpy(dst, str, 21), dst);
	printf("dst: %ld, len: %s\n", ft_strlcpy(dst, str, 14), dst);
	printf("dst: %ld, len: %s\n", ft_strlcpy(dst, str, 1), dst);
	printf("dst: %ld, len: %s\n", ft_strlcpy(dst, str, 0), dst);
}*/

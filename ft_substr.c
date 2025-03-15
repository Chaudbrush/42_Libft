/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:59:45 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/15 13:46:20 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*dest;

	if (s[0] == 0)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start || len == 0)
	{
		dest = malloc(1);
		dest[0] = 0;
		return (dest);
	}
	if (len > s_len)
		dest = malloc(sizeof(char) * (s_len - start + 1));
	else
		dest = malloc(sizeof(char) * (len - start + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

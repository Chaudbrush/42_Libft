/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:27:03 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/26 18:58:35 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

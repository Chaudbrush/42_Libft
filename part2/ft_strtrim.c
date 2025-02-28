/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:00:19 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/28 17:23:08 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncopy(char *dst, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	is_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		first_index;
	int		last_index;
	char	*new;

	i = 0;
	first_index = -1;
	while (s1[i])
	{
		while (is_set((char *)set, s1[i]) && s1[i])
			i++;
		while (!(is_set((char *)set, s1[i])) && s1[i])
		{
			if (first_index < 0)
				first_index = i;
			if (is_set((char *)set, s1[i + 1]))
				last_index = i;
			i++;
		}
	}
	len = last_index - first_index + 1;
	new = malloc(sizeof(char) * (len + 1));
	ft_strncopy(new, (char *)&s1[first_index], len);
	return (new);
}

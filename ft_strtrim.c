/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:00:19 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/15 13:44:35 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t	get_fstindex(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (is_set((char *)set, s1[i]) && s1[i])
		i++;
	return (i);
}

size_t	get_lstindex(char const *s1, char const *set, size_t len)
{
	while (is_set((char *)set, s1[len - 1]) && len > 0)
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		fst_index;
	size_t		lst_index;
	char		*new;

	len = ft_strlen((char *)s1);
	fst_index = get_fstindex(s1, set);
	len = get_lstindex(s1, set, len);
	lst_index = len - 1;
	if (!set)
		new = ft_strdup(s1);
	else if (!len)
	{
		new = malloc(1);
		new[0] = 0;
	}
	else
	{
		len = lst_index - fst_index + 1;
		new = malloc(sizeof(char) * len + 1);
		ft_strlcpy(new, (const char *)&s1[fst_index], len + 1);
	}
	return (new);
}

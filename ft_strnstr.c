/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:13:40 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/02 11:16:17 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	i;
	int		j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int		i;
	char	*bigstr = "Foo Bar Baz";
	char	*smallstr = "Bar";
	char	*ptr;

	ptr = ft_strnstr("aaabcabcd", "cd", 8);
	i = -1;
	while (ptr[++i])
		write(1, &ptr[i], 1);
	write(1, "\n", 1);
}*/

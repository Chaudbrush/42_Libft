/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:13:40 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/25 13:15:13 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// SEG FAULT IF DONT FIND A MATCH??

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
		while (big[i + j] == little[j])
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
	char	*bigstr = "Foo Bar Baz";
	char	*smallstr = "Bar";
	char	*ptr;

	ptr = ft_strnstr(bigstr, smallstr, 4);
	printf("%s\n", ptr);
}*/

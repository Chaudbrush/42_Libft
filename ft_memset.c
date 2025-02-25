/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:01:45 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/24 16:19:47 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = str;
	printf("%d\n", *ptr);
	while(i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	str[] = "Welcome to 42 School";
	void	*ptr = malloc(sizeof(char) * 8);
	ft_memset(*(void *)str, '#', 7);
	printf("%d\n", *(int *)ptr);
	return (0);
}

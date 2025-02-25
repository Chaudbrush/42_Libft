/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:45:01 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/24 19:10:02 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(char *s1, char *s2)
{
	char	tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_build_string(char *s, long nb_l)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (nb_l < 0)
	{
		s[i++] = '-';
		nb_l = -nb_l;
		j = 1;
	}
	if (nb_l == 0)
		s[i++] = (nb_l % 10) + '0';
	while (nb_l)
	{
		s[i++] = (nb_l % 10) + '0';
		nb_l /= 10;
	}
	s[i] = '\0';
	i--;
	while (i > j)
		ft_swap(&s[j++], &s[i--]);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb_l;
	char	*string;

	nb_l = n;
	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	if (nb_l <= 0)
		string = malloc(sizeof(char) * (len + 2));
	else
		string = malloc(sizeof(char) * (len + 1));
	if (!string)
		return (0);
	ft_build_string(string, nb_l);
	return (string);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
}*/

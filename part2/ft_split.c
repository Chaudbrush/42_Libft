/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:04:23 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/24 19:21:08 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;
	int	state;

	i = 0;
	count = 0;
	while (s[i])
	{
		state = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (state == 0)
			{
				count++;
				state = 1;
			}
			i++;
		}
	}
	return (count);
}

char	*ft_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free_alloc(char **av, int j)
{
	while (j >= 0)
	{
		free(av[j]);
		j--;
	}
}

void	ft_populate(char **av, char const *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (len)
		{
			av[j] = malloc(sizeof(char) * (len + 1));
			if (!av[j])
				ft_free_alloc(av, j - 1);
			ft_strncpy(av[j], &s[i - len], len);
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**argv;

	words = word_count(s, c);
	argv = malloc(sizeof(char *) * (words + 1));
	if (!argv)
		return (0);
	argv[words] = 0;
	ft_populate(argv, s, c);
	return (argv);
}
/*
int	main(void)
{
	int		i;
	char	*string = "This string is gonna get splitted baby!";
	char	sep = ' ';
	char	**result;

	result = ft_split(string, sep);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/

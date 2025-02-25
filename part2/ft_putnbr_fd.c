/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:20:07 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/24 16:31:38 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb_l;
	char	digit;

	nb_l = n;
	if (nb_l < 0)
	{
		write(fd, "-", 1);
		nb_l = -nb_l;
	}
	digit = (nb_l % 10) + '0';
	if (nb_l >= 10)
		ft_putnbr_fd(nb_l / 10, fd);
	write(fd, &digit, 1);
}

int	main(void)
{
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 2);
	write(1, "\n", 1);
}

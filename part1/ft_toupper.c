/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:11:10 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/25 10:12:32 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

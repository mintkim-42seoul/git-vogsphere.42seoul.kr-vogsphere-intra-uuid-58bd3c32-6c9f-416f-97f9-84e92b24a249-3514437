/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:52:37 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 17:47:10 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	char d;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			d = '-';
			write(1, &d, 1);
			nb = -nb;
			ft_putnbr(nb);
		}
		else
		{
			if (nb > 9)
				ft_putnbr(nb / 10);
			c = 48 + nb % 10;
			write(1, &c, 1);
		}
	}
}

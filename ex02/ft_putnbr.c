/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:52:37 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/07 12:29:44 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print1(int num1)
{
	int a;
	int b;
	int c;

	a = num1 / 10;
	if (a > 10)
	{
		print1(a);
	}
	else
	{
		c = a + 48;
		write(1, &c, 1);
	}
	b = num1 % 10 + 48;
	write(1, &b, 1);
}

void	print2(int num2)
{
	int a;
	int c;

	if (num2 == -2147483648)
	{
		num2 = num2 + 1;
		num2 = -num2;
		print1(num2 / 10);
		c = 56;
		write(1, &c, 1);
	}
	else
	{
		a = -num2;
		print1(a);
	}
}

void	ft_putnbr(int nb)
{
	int e;

	if (nb > 0)
	{
		print1(nb);
	}
	else if (nb == 0)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else
	{
		e = 45;
		write(1, &e, 1);
		print2(nb);
	}
}

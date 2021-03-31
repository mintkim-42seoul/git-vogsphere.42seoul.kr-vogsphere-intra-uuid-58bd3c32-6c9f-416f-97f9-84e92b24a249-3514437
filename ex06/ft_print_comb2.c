/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:26:00 by mintkim           #+#    #+#             */
/*   Updated: 2021/03/31 12:20:36 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int e, int f)
{
	int a;
	int b;
	int c;
	int d;

	a = e / 10 + 48;
	b = e % 10 + 48;
	c = f / 10 + 48;
	d = f % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(e == 98 && f == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			print(i, j);
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:31:31 by mintkim           #+#    #+#             */
/*   Updated: 2021/03/31 22:36:10 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 55 && b == 56 && c == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 47;
	while (++i <= 55)
	{
		j = i;
		while (++j <= 56)
		{
			k = j;
			while (++k <= 57)
			{
				print(i, j, k);
			}
		}
	}
}

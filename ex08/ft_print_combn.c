/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:35:07 by mintkim           #+#    #+#             */
/*   Updated: 2021/03/31 22:27:57 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int l)
{
	int i;
	int j;

	i = 0;
	while (i < l)
	{
		j = num[i] + 48;
		write(1, &j, 1);
		++i;
	}
}

void	cal(int m)
{
	int i;

	i = -1;
	while (++i < m - 1)
	{
		if (num[i] >= num[i + 1])
		{
			return ;
		}
	}
	print(m);
	if (num[0] < 10 - m)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int i;
	int *num[10];

	i = -1;
	while (i < n)
		++i;
	num[i] = i;
	i = -1;
	while (num[0] <= 10 - n)
	{
		cal(n);
		num[n - 1]++;
		i = n;
		while (i > 1)
		{
			--i;
			if (num[i] > 9)
			{
				++num[i - 1];
				num[i] = 0;
			}
		}
	}
}

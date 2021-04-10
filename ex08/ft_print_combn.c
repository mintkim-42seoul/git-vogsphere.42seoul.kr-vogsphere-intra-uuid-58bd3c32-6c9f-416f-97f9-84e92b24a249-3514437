/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:35:07 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 21:13:50 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_num[10];

void	print(int l)
{
	int i;
	int j;

	i = 0;
	while (i < l)
	{
		j = g_num[i] + 48;
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
		if (g_num[i] >= g_num[i + 1])
		{
			return ;
		}
	}
	print(m);
	if (g_num[0] < 10 - m)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int i;

	if (n > 10 || n <= 0)
		return ;
	i = -1;
	while (++i < n)
		g_num[i] = i;
	i = -1;
	while (g_num[0] <= (10 - n))
	{
		cal(n);
		if (n == 10)
			break ;
		g_num[n - 1]++;
		i = n;
		while (i > 1)
		{
			--i;
			if (g_num[i] > 9)
			{
				++g_num[i - 1];
				g_num[i] = 0;
			}
		}
	}
}

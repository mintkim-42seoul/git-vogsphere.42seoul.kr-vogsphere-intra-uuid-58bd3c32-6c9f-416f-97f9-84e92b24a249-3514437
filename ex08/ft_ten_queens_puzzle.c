/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:47:21 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/12 16:25:19 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_array[10][10];
char	g_cord[10];
int		g_cnt = 0;

void	print(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		write(1, &g_cord[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		check(int y, int x)
{
	int i;

	i = 1;
	while (y - i >= 0)
	{
		if (g_array[y - i][x] == '1')
			return (0);
		if (g_array[y - i][x - i] == '1' && x - i >= 0)
			return (0);
		if (g_array[y - i][x + i] == '1' && x + i < 10)
			return (0);
		i++;
	}
	return (1);
}

void	rec(int n)
{
	int i;

	if (n == 10)
	{
		print();
		g_cnt++;
	}
	i = 0;
	while (i < 10)
	{
		if (g_array[n][i] == '0' && check(n, i) == 1)
		{
			g_array[n][i] = '1';
			g_cord[n] = i + '0';
			rec(n + 1);
			g_array[n][i] = '0';
			g_cord[n] = g_cord[n] - i - '0';
		}
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			g_array[i][j] = '0';
			j++;
		}
		i++;
	}
	rec(0);
	return (g_cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:44:22 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 02:49:03 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_digit[100000];
int		g_cnt = 0;
int		g_i = 0;
int		g_j = 0;
int		g_sign = 1;

int		check(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
				|| base[i] == '\r' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	ft_atoii(char *str, char *base, int radix)
{
	while (str[g_i] == ' ' || str[g_i] == '\t' || str[g_i] == '\n'
				|| str[g_i] == '\v' || str[g_i] == '\f' || str[g_i] == '\r')
		g_i++;
	while (str[g_i] == '-' || str[g_i] == '+')
	{
		if (str[g_i] == '-')
			g_sign = -g_sign;
		g_i++;
	}
	while (str[g_i])
	{
		g_j = 0;
		while (base[g_j])
		{
			if (base[g_j] == str[g_i])
			{
				g_digit[g_cnt++] = str[g_i];
				break ;
			}
			g_j++;
			if (g_j == radix)
				return ;
		}
		g_i++;
	}
}

int		base_check(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	init(void)
{
	int i;

	i = 0;
	g_i = 0;
	g_sign = 1;
	while (g_digit[i])
	{
		g_digit[i] = 0;
		i++;
	}
	g_cnt = 0;
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int radix;
	int retur;

	i = 0;
	retur = 0;
	radix = 0;
	init();
	while (base[radix])
		radix++;
	if (check(base) == 0)
		return (0);
	ft_atoii(str, base, radix);
	while (g_digit[i])
	{
		if (base_check(base, g_digit[i]) == -1)
			return (0);
		retur = retur * radix;
		retur = retur + base_check(base, g_digit[i]);
		i++;
	}
	if (g_sign == -1)
		retur = -retur;
	return (retur);
}

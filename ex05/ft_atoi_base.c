/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:44:22 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 00:10:08 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_digit[100000];
int		g_cnt = 0;

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

int		ft_atoii(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		g_digit[g_cnt++] = str[i];
		i++;
	}
	return (sign);
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
	while (g_digit[i])
	{
		g_digit[i] = 0;
		i++;
	}
	g_cnt = 0;
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
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
	sign = ft_atoii(str);
	while (g_digit[i])
	{
		if (base_check(base, g_digit[i]) == -1)
			return (0);
		retur = retur * radix;
		retur = retur + base_check(base, g_digit[i]);
		i++;
	}
	if (sign == -1)
		retur = -retur;
	return (retur);
}

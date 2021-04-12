/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:35:59 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 04:39:15 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int				base_check(char *base, char c);
int				check(char *base);
void			ft_putnbr_base(int nbr, char *base, int radix);
long long		jari(long long digit, int radix);

char			g_digit[100000];
char			*g_st;
int				g_cnt = 0;
int				g_i = 0;
int				g_j = 0;
int				g_sign = 1;

void			ft_atoii(char *str, char *base, int radix)
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

void			init(void)
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

void			recc(char *base, long long nbr, int radix, int minus)
{
	if (nbr == 0)
		return ;
	if (minus == -1)
	{
		recc(base, nbr / radix, radix, minus);
		g_digit[g_cnt++] = base[nbr % radix];
	}
	else
	{
		recc(base, nbr / radix, radix, minus);
		g_digit[g_cnt++] = base[nbr % radix];
	}
}

int				ft_atoi_base(char *str, char *base)
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

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int radix;
	int digit;

	radix = 0;
	while (base_to[radix])
		radix++;
	if (check(base_from) == 0 || check(base_to) == 0)
		return (0);
	digit = ft_atoi_base(nbr, base_from);
	init();
	if (!(g_st = (char *)malloc((jari(digit, radix) + 1) * sizeof(char))))
		return (0);
	if (digit < 0)
	{
		g_digit[0] = '-';
		g_cnt++;
	}
	if (digit == 0)
	{
		g_digit[0] = base_to[0];
		return (g_digit);
	}
	g_st = g_digit;
	ft_putnbr_base(digit, base_to, radix);
	return (g_st);
}

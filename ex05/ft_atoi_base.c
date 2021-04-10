/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:59:00 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 12:43:18 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_digit[100000];
int		g_cq = 0;
int		g_len = 0;
int		g_sign = 1;
int		g_flag = 1;
int		g_cnt = 0;

int		rec(char *base, int radix)
{
	int dbl;
	int i;
	int j;

	i = 0;
	while (g_digit[g_len])
		g_len++;
	while (i < g_len)
	{
		j = 0;
		dbl = 1;
		while (i - j > 0)
		{
			dbl = dbl * radix;
			j++;
		}
		j = 0;
		while (base[j] != g_digit[g_len - i - 1])
			j++;
		g_cq = dbl * j + g_cq;
		i++;
	}
	return (g_cq);
}

int		check(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	if (i == 1 || i == 0)
		return (0);
	return (1);
}

int		ft_atoii(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			if (g_flag == 2)
				break ;
			if (str[i] == '-')
				g_sign = -g_sign;
		}
		else if (str[i] >= 32 && str[i] <= 127)
		{
			g_digit[g_cnt++] = str[i];
			g_flag = 2;
		}
		else
			break ;
	}
	return (g_sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int i;
	int ret;

	i = 0;
	while (base[i])
		i++;
	sign = ft_atoii(str);
	if (check(base) == 0)
		return (0);
	ret = rec(base, i);
	if (sign == -1)
		ret = -ret;
	i = 0;
	g_cnt = 0;
	g_cq = 0;
	g_len = 0;
	while (g_digit[i])
	{
		g_digit[i] = '\0';
		i++;
	}
	g_flag = 1;
	g_sign = 1;
	return (ret);
}

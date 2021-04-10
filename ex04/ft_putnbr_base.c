/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:45:05 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 17:46:00 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recc(char *base, int nbr, int radix)
{
	int origin_radix;
	int cnt;
	int i;

	origin_radix = radix;
	cnt = 0;
	while (nbr / radix >= origin_radix)
	{
		radix = radix * origin_radix;
		cnt++;
	}
	i = cnt;
	while (i >= 0)
	{
		write(1, &base[nbr / radix], 1);
		nbr = nbr % radix;
		radix = radix / origin_radix;
		i--;
	}
	write(1, &base[nbr % origin_radix], 1);
}

int		count(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int		ccheck(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		while (base[j])
		{
			if (i != j && base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		radix;
	int		minus;
	char	c;

	radix = count(base);
	if (ccheck(base) == 1)
	{
		c = '-';
		if (nbr < 0)
		{
			write(1, &c, 1);
			if (nbr == -2147483648)
			{
				minus = nbr / radix;
				minus = -minus;
				recc(base, minus, radix);
				write(1, &base[-(nbr % radix)], 1);
				return ;
			}
			else
				nbr = -nbr;
		}
		recc(base, nbr, radix);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:25:34 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 04:35:29 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		recc(char *base, long long nbr, int radix, int minus);

void		ft_putnbr_base(int nbr, char *base, int radix)
{
	long long		good;
	int				minus;

	good = nbr;
	minus = 0;
	if (good < 0)
	{
		good = -good;
		minus = -1;
		recc(base, good, radix, minus);
	}
	else
		recc(base, good, radix, minus);
}

int			base_check(char *base, char c)
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

int			check(char *base)
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

long long	jari(long long digit, int radix)
{
	long long length;

	length = 0;
	while (1)
	{
		length++;
		if (digit / radix == 0)
			break ;
		digit /= radix;
	}
	return (length);
}

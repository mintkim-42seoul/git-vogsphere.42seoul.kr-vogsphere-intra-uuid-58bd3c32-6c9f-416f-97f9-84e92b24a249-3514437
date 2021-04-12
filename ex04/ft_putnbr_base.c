/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:45:05 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/12 23:36:12 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recc(char *base, long long nbr, int radix)
{
	if (nbr == 0)
		return ;
	recc(base, nbr / radix, radix);
	write(1, &base[nbr % radix], 1);
}

int		count(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
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

void	ft_putnbr_base(int nbr, char *base)
{
	int				radix;
	char			c;
	long long		good;

	radix = count(base);
	good = nbr;
	if (ccheck(base) == 1)
	{
		if (good < 0)
		{
			c = '-';
			write(1, &c, 1);
			good = -good;
		}
		recc(base, good, radix);
	}
}

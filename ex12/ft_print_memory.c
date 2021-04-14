/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:15:27 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/14 12:35:26 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printlet(char c)
{
	write(1, &c, 1);
}

void	printadd(long long ad, int index, char *base)
{
	if (ad == 0)
	{
		while (index < 16)
		{
			printlet('0');
			index++;
		}
		return ;
	}
	printadd(ad / 16, index + 1, base);
	write(1, &base[ad % 16], 1);
}

void	asc(unsigned char *ad, int leng, char *base)
{
	int	i;
	int ger;

	i = 0;
	while (i < leng)
	{
		ger = ad[i];
		printlet(base[ger / 16]);
		printlet(base[ger % 16]);
		if (i % 2 == 1)
			printlet(' ');
		i++;
	}
	while (i < 16)
	{
		printlet(' ');
		printlet(' ');
		if (i % 2 == 1)
			printlet(' ');
		i++;
	}
}

void	printstr(unsigned char *ad, int leng)
{
	int i;

	i = 0;
	while (i < leng)
	{
		if (ad[i] >= ' ' && ad[i] < 127)
			printlet(ad[i]);
		else
			printlet('.');
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char		*ad;
	char				*base;
	int					leng;
	int					i;
	int					j;

	i = 0;
	base = "0123456789abcdef";
	while (size > 0)
	{
		j = -1;
		if (size / 16 > 0)
			leng = 16;
		else
			leng = size;
		ad = (unsigned char*)addr + 16 * i;
		printadd((long long)ad, 0, base);
		printlet(':');
		printlet(' ');
		asc(ad, leng, base);
		printstr(ad, leng);
		size = size - leng;
		i++;
	}
	return (addr);
}

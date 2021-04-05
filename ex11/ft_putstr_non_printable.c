/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:48:01 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/05 19:03:49 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change(char c)
{
	int		a;
	int		b;
	char	d;

	a = c;
	b = (a / 16);
	d = b + 48;
	write(1, &d, 1);
	if (a % 16 > 9)
	{
		b = (a % 16) + 87;
		d = b;
		write(1, &d, 1);
	}
	else
	{
		b = a % 16 + 48;
		d = b;
		write(1, &d, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] != 127)
		{
			c = str[i];
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			c = str[i];
			change(c);
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:48:01 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/14 12:33:45 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sss(unsigned char a)
{
	a = a + '0';
	if (a > '9')
		a = a + 39;
	write(1, &a, 1);
}

void	print(unsigned char a)
{
	write(1, "\\", 1);
	sss(a / 16);
	sss(a % 16);
}

int		ppp(unsigned char a)
{
	if (' ' <= a && a <= '~')
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ppp(*str) == 0)
			print(*str);
		else
			write(1, str, 1);
		str++;
	}
}

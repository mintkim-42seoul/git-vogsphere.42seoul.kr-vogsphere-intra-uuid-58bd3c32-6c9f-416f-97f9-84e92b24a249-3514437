/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:38:32 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/15 02:06:55 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	printsize(int num)
{
	char *base;

	base = "0123456789";
	if (num > 9)
		printsize(num / 10);
	write(1, &base[num % 10], 1);
}

void	printstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		printstr(par[i].str);
		printsize(par[i].size);
		write(1, "\n", 1);
		printstr(par[i].copy);
		i++;
	}
}

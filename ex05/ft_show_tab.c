/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:38:32 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 23:11:06 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(int num, char *base)
{
	if (num == 0)
		return ;
	printnum(num / 10, base);
	write(1, &base[num % 10], 1);
}

void	printsize(char *str)
{
	int		i;
	int		cnt;
	char	*base;

	base = "0123456789";
	i = 0;
	cnt = 0;
	while (str[i])
		i++;
	printnum(i, base);
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
		printsize(par[i].str);
		write(1, "\n", 1);
		printstr(par[i].copy);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:04:17 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/03 18:51:54 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int sw;

	i = 0;
	while (i < size / 2)
	{
		sw = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = sw;
		++i;
	}
}

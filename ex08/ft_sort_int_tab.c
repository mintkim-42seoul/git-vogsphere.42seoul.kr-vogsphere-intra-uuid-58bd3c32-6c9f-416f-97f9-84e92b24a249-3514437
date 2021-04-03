/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:36:11 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/03 19:00:50 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int cnt;
	int sw;

	i = 0;
	cnt = size - 1;
	while (i < size)
	{
		j = 0;
		while (j < cnt)
		{
			if (tab[j] > tab[j + 1])
			{
				sw = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = sw;
			}
			++j;
		}
		--cnt;
	}
}

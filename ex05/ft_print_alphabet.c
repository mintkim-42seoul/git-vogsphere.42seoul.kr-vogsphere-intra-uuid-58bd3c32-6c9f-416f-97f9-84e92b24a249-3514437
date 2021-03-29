/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:52:46 by mintkim           #+#    #+#             */
/*   Updated: 2021/03/29 22:58:06 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int i;
	int j;
	int num;

	i=47;
	while (++i <= 55)
	{
		j = i;
		while (++j <= 56)
		{
			num = j;
			while (++num <= 57)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &num, 1);
				write(1, ", ", 2);
			}
		}
	}
}

int		main()
{
	ft_print_comb();
}

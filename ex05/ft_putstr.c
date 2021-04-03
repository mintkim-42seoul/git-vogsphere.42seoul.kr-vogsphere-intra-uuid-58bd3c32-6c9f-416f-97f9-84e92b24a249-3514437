/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:35:33 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/03 18:48:10 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	letter;
	int		cnt;
	int		i;

	cnt = 0;
	while (str[cnt])
	{
		++cnt;
	}
	i = 0;
	while (i < cnt)
	{
		letter = str[i];
		write(1, &letter, 1);
		++i;
	}
}

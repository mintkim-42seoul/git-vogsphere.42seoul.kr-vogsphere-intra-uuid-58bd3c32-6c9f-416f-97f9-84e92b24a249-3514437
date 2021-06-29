/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:30:37 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 22:03:32 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int digit;
	int flag;

	flag = 0;
	i = 0;
	sign = 1;
	digit = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (flag == 1)
			return (0);
		if (str[i] == '-')
			sign = -sign;
		flag = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		digit = digit * 10 + (str[i++] - '0');
	return (digit * sign);
}

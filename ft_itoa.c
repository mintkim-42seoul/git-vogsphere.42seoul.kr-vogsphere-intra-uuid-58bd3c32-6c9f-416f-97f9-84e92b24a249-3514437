/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:01:17 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:02:04 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	jari(long long num)
{
	long long	i;
	long long	real;

	i = 0;
	if (num < 0)
		real = -num;
	else
		real = num;
	while (real / 10 > 0)
	{
		real = real / 10;
		i++;
	}
	if (num < 0)
		return (i + 1);
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	long long		len;
	long long		num;
	char			*ret;

	len = jari(n);
	if (n < 0)
		num = -(long long)n;
	else
		num = (long long)n;
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len >= 0)
	{
		ret[len--] = '0' + num % 10;
		num = num / 10;
	}
	if (n < 0)
		ret[0] = '-';
	i = 1;
	return (ret);
}

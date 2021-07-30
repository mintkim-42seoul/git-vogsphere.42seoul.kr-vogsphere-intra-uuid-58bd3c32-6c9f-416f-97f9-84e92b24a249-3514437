/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:01:17 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/30 11:53:10 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cg(int n, int cnt, char *ret)
{
	char	c;

	ret[cnt] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			cnt--;
			ret[cnt] = '8';
			n = -214748364;
		}
		n = -n;
		ret[0] = '-';
	}
	if (n == 0)
		ret[0] = '0';
	while (n > 0)
	{
		c = n % 10 + '0';
		ret[cnt - 1] = c;
		n /= 10;
		cnt--;
	}
}

static int	jari(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		cnt;

	cnt = jari(n);
	ret = (char *)malloc(sizeof(char) * (cnt + 1));
	if (ret == 0)
		return (NULL);
	cg(n, cnt, ret);
	return (ret);
}

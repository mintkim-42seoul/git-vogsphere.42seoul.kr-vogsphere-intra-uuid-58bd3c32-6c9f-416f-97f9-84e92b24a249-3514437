/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:04:19 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:04:31 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			same(char c, char a)
{
	if (a == c)
		return (1);
	return (0);
}

long long	word(char *str, char c)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (same(c, *str) == 0)
		{
			cnt++;
			while (*str && same(c, *str) == 0)
			{
				str++;
			}
		}
		str++;
	}
	return (cnt);
}

void		copy(char *dest, char *index, char *str)
{
	while (index < str)
	{
		*dest = *index;
		dest++;
		index++;
	}
	*dest = 0;
}

char		**ft_split(char *str, char c)
{
	long long	cnt;
	char		*index;
	char		**arr;

	cnt = 0;
	arr = (char **)malloc(word(str, c) * sizeof(char*) + 1);
	while (*str)
	{
		if (same(c, *str) == 0)
		{
			index = str;
			while (*str && same(c, *str) == 0)
				str++;
			arr[cnt] = (char *)malloc(sizeof(char) * (str - index + 1));
			copy(arr[cnt], index, str);
			cnt++;
		}
		str++;
	}
	arr[cnt] = 0;
	return (arr);
}

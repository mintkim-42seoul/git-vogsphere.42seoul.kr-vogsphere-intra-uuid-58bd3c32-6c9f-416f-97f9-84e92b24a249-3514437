/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 04:40:17 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/15 01:02:45 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			same(char *charset, char a)
{
	while (*charset)
	{
		if (a == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	word(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (same(charset, *str) == 0)
		{
			cnt++;
			while (*str && same(charset, *str) == 0)
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

char		**ft_split(char *str, char *charset)
{
	long long	cnt;
	char		*index;
	char		**arr;

	cnt = 0;
	arr = (char **)malloc(word(str, charset) * sizeof(char*) + 1);
	while (*str)
	{
		if (same(charset, *str) == 0)
		{
			index = str;
			while (*str && same(charset, *str) == 0)
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

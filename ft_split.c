/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:04:19 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/30 11:51:50 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_if_error(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static int	same(char c, char a)
{
	if (a == c)
		return (1);
	return (0);
}

static long long	word(char *str, char c)
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
		if (*str != 0)
		{
			str++;
		}
	}
	return (cnt);
}

static void	copy(char *dest, char *index, char *str)
{
	while (index < str)
	{
		*dest = *index;
		dest++;
		index++;
	}
	*dest = 0;
}

char	**ft_split(char *str, char c)
{
	long long	cnt;
	char		*index;
	char		**arr;

	cnt = 0;
	arr = (char **)malloc((word(str, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (0);
	while (*str)
	{
		if (same(c, *str) == 0)
		{
			index = str;
			while (*str && same(c, *str) == 0)
				str++;
			arr[cnt] = (char *)malloc(sizeof(char) * (str - index + 1));
			if (arr[cnt] == 0)
				return (free_if_error(arr));
			copy(arr[cnt++], index, str);
		}
		if (*str != 0)
			str++;
	}
	arr[cnt] = NULL;
	return (arr);
}

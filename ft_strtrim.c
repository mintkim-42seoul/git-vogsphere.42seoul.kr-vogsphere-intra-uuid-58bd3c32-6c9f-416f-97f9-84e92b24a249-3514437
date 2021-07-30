/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:05:21 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/22 13:26:57 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	a_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	is_it_same(char a, char const *set)
{
	unsigned int	i;

	i = 0;
	while (i < a_strlen(set))
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static char	*cccopy(char *ret, char const *s1, int start, int end)
{
	int		i;

	i = 0;
	while (start <= end)
	{
		ret[i] = s1[start];
		start++;
		i++;
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ret;

	start = 0;
	while (s1[start] && is_it_same(s1[start], set))
		start++;
	end = a_strlen(s1) - 1;
	while (end > 0 && is_it_same(s1[end], set))
		end--;
	if (start > end || end == -1)
	{
		ret = (char *)malloc(sizeof(char));
		ret[0] = 0;
		return (ret);
	}
	ret = (char *)malloc(sizeof(char) * (end - start) + 2);
	if (ret == 0)
		return (0);
	ret = cccopy(ret, s1, start, end);
	ret[end - start + 1] = 0;
	return (ret);
}

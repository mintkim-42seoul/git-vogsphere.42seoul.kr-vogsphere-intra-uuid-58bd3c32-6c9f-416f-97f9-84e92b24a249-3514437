/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:05:21 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:05:30 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	a_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	char			*ret;

	i = 0;
	start = 0;
	end = a_strlen(s1);
	while (i < a_strlen(set))
	{
		if (s1[0] == set[i])
			start = 1;
		if (s1[a_strlen(s1) - 1] == set[i])
			end = a_strlen(s1) - 1;
		i++;
	}
	if (!(ret = (char *)malloc(sizeof(char) * (end - start) + 1)))
		return (NULL);
	i = -1;
	while (++i < end - start)
		ret[i] = s1[start + i];
	ret[i] = 0;
	return (ret);
}

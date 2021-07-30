/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:04:41 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/22 15:48:17 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;
	char			*ret;

	i = -1;
	j = 0;
	len1 = in_strlen(s1);
	len2 = in_strlen(s2);
	ret = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (ret == 0)
		return (NULL);
	while (++i < len1)
		ret[i] = s1[i];
	while (i < len1 + len2)
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = 0;
	return (ret);
}

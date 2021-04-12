/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:24:45 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/12 22:35:27 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *len)
{
	int i;

	i = 0;
	while (len[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*seqen;
	char		*anot;
	long long	leng;
	long long	i;

	i = 0;
	leng = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
		leng = leng + len(strs[i++]);
	leng += (size - 1) * len(sep) + 1;
	seqen = (char *)malloc(leng * sizeof(char));
	anot = ft_strcat(seqen, strs[0]);
	i = 1;
	while (i < size)
	{
		anot = ft_strcat(anot, sep);
		anot = ft_strcat(anot, strs[i]);
		i++;
	}
	*anot = 0;
	return (seqen);
}

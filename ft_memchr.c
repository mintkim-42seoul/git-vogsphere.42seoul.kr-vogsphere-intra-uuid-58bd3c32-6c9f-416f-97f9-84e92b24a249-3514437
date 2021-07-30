/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:07:55 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/08 20:19:36 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cha;

	i = 0;
	str = (unsigned char *)s;
	cha = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cha)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

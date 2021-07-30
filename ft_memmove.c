/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:08:46 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/01 15:54:32 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*(ds + i) = *(sr + i);
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			*(ds + i) = *(sr + i);
	}
	return (dst);
}

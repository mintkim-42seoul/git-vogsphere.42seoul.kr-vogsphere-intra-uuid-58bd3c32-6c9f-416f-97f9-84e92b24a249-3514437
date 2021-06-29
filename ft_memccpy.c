/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:07:35 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:07:46 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *((unsigned char*)dst + i))
	{
		if (*((unsigned char*)src + i) == (unsigned char)c)
		{
			*((unsigned char*)dst + i) = *((unsigned char*)src + i);
			return (dst + i + 1);
		}
		*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		i++;
	}
	if (i == n)
		return (NULL);
	return (NULL);
}

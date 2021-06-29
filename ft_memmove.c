/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:08:46 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 22:58:33 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*ret;

	ret = dst;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < len && *((unsigned char*)src))
	{
		*((unsigned char*)dst + len - i - 1) =
			*((unsigned char*)src + len - i - 1);
		i++;
	}
	while (i < len)
	{
		*((unsigned char*)dst + i) = 0;
		i++;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:09:13 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 22:36:12 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		if ((unsigned char)c == *s)
		{
			return ((char*)s);
		}
		s++;
	}
	return (NULL);
}

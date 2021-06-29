/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:20 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:02:45 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*b;

	b = (char*)s;
	i = 0;
	while (*s)
	{
		s++;
	}
	while (b != s)
	{
		if (*(char*)s == (unsigned char)c)
		{
			return ((char*)s);
		}
		s--;
	}
	return (NULL);
}

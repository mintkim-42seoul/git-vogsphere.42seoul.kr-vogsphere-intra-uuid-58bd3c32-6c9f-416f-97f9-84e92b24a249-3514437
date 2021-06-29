/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:09:55 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:10:09 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size > i)
	{
		while ((k < size - i - 1) && src[k] != 0)
		{
			dest[i + k] = src[k];
			k++;
		}
		dest[i + k] = '\0';
	}
	else if (size < i)
	{
		return (j + size);
	}
	return (i + j);
}

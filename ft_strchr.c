/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:09:13 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/01 16:22:38 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char *)str;
	while (ret[i] != (char)c)
	{
		if (ret[i] == 0)
			return (0);
		i++;
	}
	return (&ret[i]);
}

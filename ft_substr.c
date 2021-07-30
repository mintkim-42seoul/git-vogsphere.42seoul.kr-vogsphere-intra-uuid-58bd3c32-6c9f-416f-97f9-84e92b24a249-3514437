/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:05:38 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/22 13:24:25 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	leng;
	char	*ret;

	if (!s)
		return (0);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == 0)
		return (0);
	leng = ft_strlen((char *)s);
	i = 0;
	while (i < len && start + i < leng)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

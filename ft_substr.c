/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:05:38 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/30 14:59:19 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			ret[j++] = s[i];
		i++;
	}
	ret[j] = '\0';
	return (ret);
}

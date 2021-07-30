/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:09:35 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/30 11:17:28 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	long long	i;
	char		*cop;

	i = 0;
	while (src[i])
		i++;
	cop = (char *)malloc(i + 1);
	if (cop == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cop[i] = src[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}

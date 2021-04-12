/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:45:53 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 05:41:57 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	i;
	char		*cop;

	i = 0;
	while (src[i])
		i++;
	cop = (char *)malloc(i + 1);
	i = 0;
	while (src[i])
	{
		cop[i] = src[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}

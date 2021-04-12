/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:52:48 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/12 19:08:41 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long long	size;
	int			*arr;
	int			*jjob;

	size = max - min;
	if (!(arr = (int *)malloc(sizeof(int) * (size))))
		return (0);
	if (min >= max)
		return (0);
	jjob = arr;
	while (min < max)
	{
		*jjob = min++;
		jjob++;
	}
	return (arr);
}

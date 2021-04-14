/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:03:08 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/14 12:25:31 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long long	size;
	int			*jjob;

	size = max - min;
	if (min >= max)
		return (0);
	if (!(*range = (int *)malloc(sizeof(int) * (size))))
		return (-1);
	jjob = *range;
	while (min < max)
	{
		*jjob = min++;
		jjob++;
	}
	return (size);
}

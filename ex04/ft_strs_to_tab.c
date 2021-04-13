/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:59:58 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 22:37:46 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					len(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int				i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*arr;
	int				i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = len(av[i]);
		arr[i].str = (char *)malloc(sizeof(char) * (arr[i].size + 1));
		arr[i].copy = (char *)malloc(sizeof(char) * (arr[i].size + 1));
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

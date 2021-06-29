/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:58:33 by mintkim           #+#    #+#             */
/*   Updated: 2021/06/29 20:15:24 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenlen(char *leeen)
{
	int i;

	i = 0;
	while (*leeen)
	{
		i++;
		leeen++;
	}
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	int				count;
	char			*cp1;
	char			*cp2;

	if (lenlen((char *)little) == 0)
		return ((char *)big);
	while (*(char *)big && len-- > 0)
	{
		cp1 = (char *)big;
		cp2 = (char *)little;
		count = 0;
		i = 0;
		if (*(char *)big == *(char *)little)
		{
			while ((*(char *)cp1++ == *(char *)cp2++) && (i++ <= len))
				count++;
		}
		if (count == lenlen((char *)little))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

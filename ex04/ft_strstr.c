/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:14:38 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/07 12:27:36 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_check;
char	*g_flag;
char	*g_flag_str;

char	*ft_strstr(char *str, char *to_find)
{
	g_flag = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		g_flag_str = str;
		to_find = g_flag;
		while (*to_find)
		{
			if (*str == *to_find)
				g_check = 1;
			else
			{
				g_check = 0;
				break ;
			}
			str++;
			to_find++;
		}
		str = g_flag_str;
		if (g_check == 1)
			return (str);
		str++;
	}
	return (0);
}

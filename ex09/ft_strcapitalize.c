/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:42:51 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/05 19:02:20 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;
int g_check;

int		check(char a)
{
	if ((a >= 48 && a <= 57) || (a >= 'a' && a <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		change(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	g_i = -1;
	while (str[++g_i])
	{
		g_check = change(str[g_i]);
		if (g_check == 1)
		{
			if (str[g_i] >= 'a' && str[g_i] <= 'z')
				str[g_i] = str[g_i] - 32;
			g_check = 0;
			g_i++;
		}
		if (g_check == 0)
			while (str[g_i])
			{
				if (str[g_i] >= 'A' && str[g_i] <= 'Z')
					str[g_i] = str[g_i] + 32;
				else if (check(str[g_i]) > 0)
				{
				}
				else
					break ;
				g_i++;
			}
	}
	return (str);
}

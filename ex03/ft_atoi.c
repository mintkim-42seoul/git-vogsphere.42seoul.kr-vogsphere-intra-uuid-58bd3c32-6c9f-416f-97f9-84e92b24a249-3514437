/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:30:37 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 12:44:11 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_ssign = 1;
int g_ddigit = 0;
int g_fflag = 1;

int		ft_atoi(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			if (g_fflag == 2)
				break ;
			if (str[i] == '-')
				g_ssign = -g_ssign;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			g_ddigit = g_ddigit * 10 + (str[i] - '0');
			g_fflag = 2;
		}
		else
			break ;
	}
	return (g_ddigit * g_ssign);
}

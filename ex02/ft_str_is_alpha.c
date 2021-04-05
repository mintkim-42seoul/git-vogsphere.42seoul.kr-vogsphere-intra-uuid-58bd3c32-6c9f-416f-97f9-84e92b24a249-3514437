/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:16:05 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/05 19:08:21 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 65 && str[i] <= 90))
		{
			check = 1;
		}
		else
		{
			check = 0;
			break ;
		}
		++i;
	}
	return (check);
}

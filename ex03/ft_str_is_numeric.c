/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:18:20 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/05 19:00:20 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:37:14 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/05 19:01:20 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			check = 1;
		else
		{
			check = 0;
			break ;
		}
		++i;
	}
	return (check);
}

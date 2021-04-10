/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:26:27 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 21:37:06 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rec(int nb, int power, int digit)
{
	if (power-- > 0)
	{
		digit = nb * digit;
		return (rec(nb, power, digit));
	}
	return (digit);
}

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	return (rec(nb, power, 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:39:52 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 21:28:07 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int digit;

	i = 1;
	digit = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		digit = digit * i;
		i++;
	}
	return (digit);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:22:11 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 21:43:10 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recei(unsigned int nb, unsigned so)
{
	while (so <= nb / 2)
	{
		if (nb % so == 0)
			return (0);
		so++;
	}
	return (1);
}

int		ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (recei(nb, 2));
}

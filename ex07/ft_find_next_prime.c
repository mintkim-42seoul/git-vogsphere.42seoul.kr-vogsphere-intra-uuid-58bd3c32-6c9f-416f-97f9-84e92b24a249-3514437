/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:56:43 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 22:58:25 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		norec(unsigned int nb)
{
	unsigned int i;
	unsigned int flag;

	if (nb < 2)
		return (0);
	while (1)
	{
		i = 2;
		flag = 0;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				flag = 1;
				break ;
			}
			if (i * i > nb)
				break ;
			i++;
		}
		if (flag == 0)
			return (nb);
		nb++;
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	return (norec(nb));
}

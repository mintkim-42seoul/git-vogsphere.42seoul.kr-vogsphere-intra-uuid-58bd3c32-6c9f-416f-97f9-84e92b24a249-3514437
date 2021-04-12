/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:35:29 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/10 23:39:26 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *ar)
{
	while (*ar)
	{
		write(1, ar, 1);
		ar++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	if (argc > 0)
	{
		while (i >= 1)
		{
			print(argv[i]);
			i--;
		}
	}
}

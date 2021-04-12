/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:12:51 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/12 12:29:03 by mintkim          ###   ########.fr       */
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
	if (argc > 0)
	{
		print(argv[0]);
	}
}

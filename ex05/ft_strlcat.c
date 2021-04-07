/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:28:33 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/07 12:27:43 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_i;
unsigned int g_j;
unsigned int g_k;

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	g_i = 0;
	g_j = 0;
	g_k = 0;
	while (dest[g_i])
		g_i++;
	while (src[g_j])
		g_j++;
	if (size > g_i)
	{
		while ((g_k < size - g_i - 1) && src[g_k] != 0)
		{
			dest[g_i + g_k] = src[g_k];
			g_k++;
		}
		dest[g_i + g_k] = '\0';
	}
	else if (size < g_i)
	{
		return (g_j + size);
	}
	return (g_i + g_j);
}

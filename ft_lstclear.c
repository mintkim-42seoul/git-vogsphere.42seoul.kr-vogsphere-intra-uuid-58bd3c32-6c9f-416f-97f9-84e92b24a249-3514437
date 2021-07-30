/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:49:49 by mintkim           #+#    #+#             */
/*   Updated: 2021/07/22 15:57:23 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*alp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		alp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = alp;
	}
	*lst = 0;
}

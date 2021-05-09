/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:21:08 by tekim             #+#    #+#             */
/*   Updated: 2021/05/09 17:34:26 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		i;

	i = 0;
	if (lst == NULL || del == NULL)
		return ;
	while (lst[i])
	{
		del(lst->content);
		free(lst);
		i++;
	}
	*lst = 0;
}

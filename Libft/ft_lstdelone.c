/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:53:36 by tekim             #+#    #+#             */
/*   Updated: 2021/05/09 17:35:23 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

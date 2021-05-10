/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:05:42 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 19:37:34 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//마지막 노드의 주소를 출력
t_list			*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

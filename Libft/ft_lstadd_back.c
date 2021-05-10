/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:09:52 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 19:36:58 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//뒤쪽에 새로운 노드를 추가
void				ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list			*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);//라스트 함수를 써서 맨 뒤의 주소를 출력한 후 추가
	new->next = last->next;
	last->next = new;
}

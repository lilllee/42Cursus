/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:02:19 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:42:55 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, unsigned int num)
{
	void			*tmp;
	const void		*tmps;
	unsigned int	i;

	i = 0;
	tmp = dest;
	tmps = src;
	while (i < num)
	{
		*((char *)tmps + i) = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*((char *)tmp + i) = *((char *)tmps + i);
		i++;
	}
	return (dest);
}

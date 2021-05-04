/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:58:18 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:42:42 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, unsigned int num)
{
	unsigned int	i;

	i = 0;
	while (i < num)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:09:20 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:40:49 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(unsigned int size, unsigned int count)
{
	unsigned int	i;
	void			*ptr;

	i = 0;
	ptr = (void *)malloc(size * count);
	while (i < count)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}

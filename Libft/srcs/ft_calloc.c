/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:09:20 by tekim             #+#    #+#             */
/*   Updated: 2021/05/05 13:54:37 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(unsigned int size, unsigned int count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(size * count);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

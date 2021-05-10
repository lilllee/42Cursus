/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:33:16 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 20:15:18 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//dest의 마지막 위치에 src를 size - strlen(dst) - 1만큼 복사
size_t			ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;//dest의 인덱스
	size_t		n;//src의 인덱스

	i = 0;
	n = 0;
	while (dest[i] && i < size)
		i++;
	while (src[n] && (i + n + 1) < size)
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i < size)
		dest[i + n] = '\0';
	return (i + ft_strlen(src));
}
//if (size < dst) (strlen(src) + size) return
//if (dst > size) (strlen(src) + strlen(dst)) return

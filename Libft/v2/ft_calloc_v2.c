/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:04:41 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 14:08:42 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_calloc(unsigned int size, unsigned int count) //0으로 배열 초기화
{
	//size크기의 변수를 count개만큼 저장할 수 있는 메모리 공간을 할당
	unsigned int	i;
	void 			*ptr;

	i = 0;
	ptr = (void *)malloc(size * count);
	while (i < count)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
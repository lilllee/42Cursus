/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:04:41 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 19:18:01 by tekim            ###   ########.fr       */
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
#include <stdio.h>
int main()
{
	char str[30] = "123456789";
	str = (char*)ft_calloc(4, 10);
	printf("%s\n", str);
}

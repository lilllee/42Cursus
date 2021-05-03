/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:38:28 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 18:38:33 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memset(void *ptr, int value, unsigned int size) // 메모리를 특정 값으로 초기화
{
	//ptr 메모리 크기를 변경할 포인터
	//value 초기화 값
	//size 초기화 크기
	unsigned int i;

	i = 0;
	while (i < size)
	{
		*((char *)ptr + i) = value; //ptr + i 는 ptr 의 다음주소를 의미함 ptr[0 + 1] == *(ptr + 1)
		i++;
	}
	return (ptr);
}
#include <stdio.h>
int main()
{
	char str[30] = "123456789";
	printf("%s\n", ft_memset(str, '*', sizeof(str) - 1));
}


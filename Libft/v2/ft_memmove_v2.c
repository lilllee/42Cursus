/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:19 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 21:28:09 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memmove(void *dest, const void *src, unsigned int num)
{
	//num 복사할 바이트 길이
	//리턴은 dest를 반환
	//성능을 따지면 memcpy가 더 좋고 안정성을 따지면 memmove가 더 좋음 다른 버퍼에 한번 저장하고 가기 때문
	char *tmp;
	const char *tmps;

	tmps = src;
	tmp = dest;
	while (num--)
	{
		*tmp = *tmps;
		tmp++;
		tmps++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
        char array[10];

        memset(array, 0, sizeof(array));
        strcpy(array, "test");

        printf("original : %s\n", array);

        ft_memmove(array+2, array, strlen("test"));

        printf("after memmove : %s\n", array);

        return 0;
}

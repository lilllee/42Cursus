/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:42:34 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 20:55:29 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memcpy(void *dest, const void *src, unsigned int num)
{
	//dest 복사받을 메모리
	//source 복사 할 메모리
	//num복사할 데이터(값)의 길이
	//길이를 계산할때 char* 타입의 문자열의 끝을 알리는 "\0"의 길이도 계산해야함 + 1
	unsigned int i;
	char *tmp;
	const char *tmps;	
	
	tmps = src;
	tmp = dest;
	i = 0;
	while (i < num)
	{
		*tmp = *tmps;
		tmp++;
		tmps++;
		i++;
	}
	dest = tmp;
	return (dest);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
        char src[32] = "Source memory";
        char dest[32] = "Destination memory";

        printf("Destination is \"%s\"\n", dest);
        /* src 메모리를 sizeof(src) 만큼 (32byte) dest 로 복사합니다. */
        ft_memcpy(dest, src, sizeof(src));
        printf( "After memcpy, Destination is \"%s\"\n", dest);

        return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:54:32 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 21:19:51 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	//문자를 찾을 때 까지 문자열 복사
	//dest에 문자열 src를 복사를 진행함
	//c를 발견한 경우 복사를 멈추고 복사완료된 dest에 대핸 포인터를 리턴
	//그렇지 않은 경우에는 n바이트가 복사되고 NULL포인터 리턴
	unsigned int i;
	char *tmp;
	const char *tmps;

	tmps = src;
	tmp = dest;
	while (n--)
	{
		*tmp = *tmps;
		tmp++;
		tmps++;
		i++;
		if (*tmps == (char)c) //
		{
			tmps++;
			*tmp = *tmps;
			break ;
		}
	}
	return (dest);
}

#include <stdio.h>
int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);	// Before memset(): GeeksForGeeks is for programming geeks.
	ft_memccpy(str + 14, "hi hello",'l', 10);
	printf("After ft_memcpy():  %s", str);	// After ft_memcpy():  GeeksForGeeks hi hel programming geeks.%
}

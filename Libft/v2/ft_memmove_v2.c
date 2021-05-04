/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:19 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 13:14:22 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				*ft_memmove(void *dest, const void *src, unsigned int num)
{
	//num 복사할 바이트 길이
	//리턴은 dest를 반환
	//성능을 따지면 memcpy가 더 좋고 안정성을 따지면 memmove가 더 좋음 다른 버퍼에 한번 저장하고 가기 때문
	void			*tmp;
	const void		*tmps;
	unsigned int	i;

	i = 0;
	tmp = dest;
	tmps = src;
	while (i < num)
	{
		*((char *)tmps + i) = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*((char *)tmp + i) = *((char *)tmps + i);
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    int i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};   
 
    printf("== 이동 전 ==\n");//이동 전 arr의 원소들 출력
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
 
    memmove(arr+1,arr,sizeof(int)*9);//arr에 있는 int 형식 원소 9개를 arr+1로 이동
    arr[0] = 0; //arr[0]을 0으로 설정
    printf("== 이동 후(빈자리는 0으로 채움) ==\n");//이동 전 arr의 원소들 출력
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");    
 
    return 0;
}

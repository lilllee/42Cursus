/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:19 by tekim             #+#    #+#             */
/*   Updated: 2021/05/06 13:58:10 by tekim            ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:19 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 20:08:41 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				*ft_memmove(void *dest, const void *src, unsigned int num)
{
	//num 복사할 바이트 길이
	//리턴은 dest를 반환
	//성능을 따지면 memcpy가 더 좋고 안정성을 따지면 memmove가 더 좋음 다른 버퍼에 한번 저장하고 가기 때문
	size_t			i;
	const char		*s;
	char			*d;

	if (src == NULL && dest == NULL)
		return (NULL);
	s = src;
	d = dest;
	i = 0;
	if (dest > src)
	{
		while (num)
		{
			if (num < 1)
				break ;
			*(d + num - 1) = *(s + num - 1);
			num--;
		}
	}
	while (i < num)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}

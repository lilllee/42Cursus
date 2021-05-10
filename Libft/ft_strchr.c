/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:02:56 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 19:59:34 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자를 검색 c가 참조할 문자 str이 검색될 문자열
char		*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
		{
			return ((char*)str);
		}
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (0);
}

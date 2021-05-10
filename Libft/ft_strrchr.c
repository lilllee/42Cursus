/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:12:59 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 20:00:16 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자를 검색하되 가장 마지막에 나오는 위치를 찾음
char		*ft_strrchr(const char *str, int c)
{
	char	*start;

	start = (char *)str;
	while (*str)
		str++;
	while (str != start && *str != (char)c)
		str--;
	if (*str == (char)c)
		return ((char *)str);
	return (0);
}

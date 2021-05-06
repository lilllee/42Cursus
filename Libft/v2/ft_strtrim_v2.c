/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:35:42 by tekim             #+#    #+#             */
/*   Updated: 2021/05/06 13:37:07 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	//s1 문자열 앞뒤에 set에 포함된 문자가 있으면 다 제거
	size_t		start; //시작점
	size_t		end;   //끝점
	char		*ret;  //리턴

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	if (!(ret = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (0);
	ft_strlcpy(ret, (char *)s1 + start, end - start + 1);
	return (ret);
}

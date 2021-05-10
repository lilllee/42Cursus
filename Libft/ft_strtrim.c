/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:35:42 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 19:58:56 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	//s1은 제거될 문자열
	//set은 제거할 참조 문자열 s1의 맨 앞뒤를 제거
	size_t		start;
	size_t		end;
	char		*ret;

	ret = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		ret = (char *)malloc(sizeof(char) * (end - start + 1));
		ft_strlcpy(ret, (char *)s1 + start, end - start + 1);
	}
	return (ret);
}

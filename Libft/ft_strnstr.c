/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:31:50 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 20:17:58 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자열 내에서 부분문자열을 탐색하는 함수 len 만큼 탐색함
char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (0);
	if (*needle == 0)
		return (&((char *)haystack)[i]);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j] == haystack[i + j])
		{
			while (needle[j] && haystack[i + j])
			{
				if (needle[j] != haystack[i + j] || len <= i + j)
					break ;
				j++;
			}
			if (needle[j] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (0);
}

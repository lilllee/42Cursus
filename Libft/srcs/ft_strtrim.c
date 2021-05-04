/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:35:42 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 16:51:01 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int				ft_limited_len(char const c, char const *set)
{
	size_t		idx;
	size_t		size;

	while (set[idx])
	{
		if (!(c == set[idx]))
			size++;
		idx++;
	}
	return (size);
}
	
char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*result;

	if (!s1)
		return (0);
	len = ft_limited_len(s1);
	result = (char *)malloc(len + 1);
}

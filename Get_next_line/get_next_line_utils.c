/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:53:59 by tekim             #+#    #+#             */
/*   Updated: 2021/05/23 15:51:32 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t			ft_strlen(const char *s)
{
	int 		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void			*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;
	const char	*s;
	char		*d;

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
				break;
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

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t len1;
	size_t len2;
	size_t ret_len;
	char *ret;

	if (!s1 && !s2)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ret_len = len1 + len2 + 1;
	ret = malloc(sizeof(char) * ret_len);
	if (!ret)
		return (0);
	ft_memmove(ret, s1, len1);
	ft_memmove(ret + len1, s2, len2);
	ret[ret_len - 1] = '\0';
	free((char *)s1);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:37:32 by tekim             #+#    #+#             */
/*   Updated: 2021/05/05 12:09:11 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len(char *ptr, char c)
{
	int size;

	size = 0;
	while (*ptr)
	{
		if (*ptr != c)
			size++;
		ptr++;
	}
	return (size);
}

void		ft_strcpy2(char *dest, char *from, char *to)
{
	while (from < to)
	{
		*dest = *from;
		dest++;
		from++;
	}
	dest = 0;
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	*tmp;
	char	**ret;
	char	*tmp2;

	tmp2 = (char*)s;
	i = 0;
	len = ft_len(tmp2, c);
	ret = (char **)malloc(sizeof(char *) * len + 1);
	while (*tmp2)
	{
		if (*tmp2 != c)
		{
			tmp = tmp2;
			while (*tmp2 != c && *tmp2)
				tmp2++;
			ret[i] = (char *)malloc(tmp2 - tmp + 1);
			ft_strcpy2(ret[i], tmp, tmp2);
			i++;
		}
		tmp2++;
	}
	ret[len] = 0;
	return (ret);
}

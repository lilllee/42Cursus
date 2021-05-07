/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:37:32 by tekim             #+#    #+#             */
/*   Updated: 2021/05/07 18:03:23 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_len(char const *ptr, char c)
{
	size_t		size;
	size_t		i;

	size = 0;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] != c && ptr[i])
			size++;
		i++;
	}
	return (size);
}

void		ft_strcpy2(char *dest, char const *src ,size_t from, size_t to)
{
	while (from < to)
	{
		*dest = src[from];
		dest++;
		from++;
	}
	dest = 0;
}

void		*memory_free(char **memf, size_t size_of_array)
{
	size_t	i;

	i = 0;
	while (i < size_of_array)
	{
		free(memf[i]);
		i++;
	}
	free(memf);
	return (NULL);
}

void				operate(char const *s, char c, char **ret)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			k = i;
			while (s[i] != 0 && s[i] != c)
				i++;
			if (!(ret[j] = (char *)malloc(sizeof(char) * (i - k + 1))))
			{
				memory_free(ret, j);
				return ;
			}
			ft_strcpy2(ret[j], s, k, i);
			j++;
		}
		else if (s[i])
			i++;
	}
}

char                **ft_split(char const *s, char c)
{
	char			**ret;
	size_t			len;

	if (s == 0)
		return (NULL);
	len = ft_len(s, c);
	ret = (char **)malloc(sizeof(char *)*(len + 1));
	if (ret == 0)
		return (NULL);
	if (len == 0)
		return (ret);
	operate(s, c, ret);
	ret[len] = 0;
	return (ret);
}

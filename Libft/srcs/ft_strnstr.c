/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:31:50 by tekim             #+#    #+#             */
/*   Updated: 2021/05/06 18:57:58 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		if (substr[j] == str[i + j])
		{
			while (substr[j] && str[i + j])
			{
				if (substr[j] != str[i + j] || len <= i + j)
					break ;
				else if (str[i + j] == '\0' && substr[j] == '\0')
					return (&((char *)str)[i]);
				j++;
			}
			if (substr[j] == '\0')
				return (&((char *)str)[i]);
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:31:50 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:46:14 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *substr, unsigned int len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[j] == substr[j])
		{
			j++;
			if (substr[i] == '\0')
				return ((char *)str);
		}
		i++;
	}
	return (0);
}
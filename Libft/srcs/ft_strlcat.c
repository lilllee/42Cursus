/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:33:16 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:44:23 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlen2(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i] && i < size)
		i++;
	while (src[n] && (i + n + 1) < size)
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i < size)
		dest[i + n] = '\0';
	return (i + ft_strlen(src));
}

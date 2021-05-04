/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:59:27 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:59:36 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *d, const void *s, int c, unsigned int n)
{
	char			*tmp;
	const char		*tmps;

	tmps = s;
	tmp = d;
	while (n--)
	{
		*tmp = *tmps;
		tmp++;
		tmps++;
		if (*tmps == (char)c)
		{
			tmps++;
			*tmp = *tmps;
			break ;
		}
	}
	return (d);
}

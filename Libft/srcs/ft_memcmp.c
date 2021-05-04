/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:01:11 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 15:42:27 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(void *s1, void *s2, unsigned int num)
{
	char			*tmp1;
	char			*tmp2;
	unsigned int	i;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	i = 0;
	while (i < num)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}

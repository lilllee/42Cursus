/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:58:52 by tekim             #+#    #+#             */
/*   Updated: 2021/05/07 16:23:44 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_intlen(long n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*ret;
	size_t			size;
	long			tmp;

	tmp = n;
	size = ft_intlen(tmp);
	if (!(ret = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	ret[size--] = '\0';
	if (tmp == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	if (tmp < 0)
	{
		tmp *= -1;
		ret[0] = '-';
	}
	while (tmp)
	{
		ret[size] = tmp % 10 + '0';
		tmp /= 10;
		size--;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:12:59 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 16:07:52 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char		*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	str--;
	while (*str && *str != c)
		str--;
	if (*str == c)
		return (str);
	return (NULL);
}

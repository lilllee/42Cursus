/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:12:59 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 15:43:36 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

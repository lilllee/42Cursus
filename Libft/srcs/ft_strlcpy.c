/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:02:09 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 12:25:51 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && (i + 1) < size)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}

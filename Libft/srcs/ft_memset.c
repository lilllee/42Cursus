/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:25:18 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 18:39:17 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memset(void *ptr, int value, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		*((char *)ptr + i) = value;
		i++;
	}
	return (ptr);
}

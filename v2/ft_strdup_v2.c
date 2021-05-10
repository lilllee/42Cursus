/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:58:59 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 19:03:32 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //cpy와 비슷한 함수지만 malloc을 통해 메모리를 할당 한 후 cpy를 진행

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(char *s1)
{
	char *dest;
	int i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

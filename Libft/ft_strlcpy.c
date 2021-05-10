/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:16:17 by tekim             #+#    #+#             */
/*   Updated: 2021/05/10 21:20:11 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	if (!dest || !src)
		return (0);
	printf("check\n");
	tmp = ft_strlen(src);
	printf ("%d\n",tmp);
	while (i < tmp && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	printf ("%d\n", i);
	if (size > 0)
		dest[i] = '\0';
	return (tmp);
}
int main()
{
	char dest[] = "asdfg";
	printf("%zu\n", ft_strlcpy(dest, "", 10));
	printf ("dest : %s\n",dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:19:11 by kimts             #+#    #+#             */
/*   Updated: 2021/05/14 17:28:31 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int ft_width(const char *format)
{
	int tmp;

	while (*format)
	{
		while (*format != '%' && *format)
			format++;
		if (*(format + 1) >= '0' && *(format + 1) <= '9')
		{
			format++;
			tmp = atoi(format);
			while (tmp--)
				write(1, " ", 1);
		}
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:59:45 by tekim             #+#    #+#             */
/*   Updated: 2021/05/14 19:03:22 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/*
static int ft_int_len(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i += 1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
*/
int ft_cwidth(const char *format)
{
	int tmp;

	while (*format)
	{
		while (*format != '%' && *format)
			format++;
		if (*(format + 1) >= '0' && *(format + 1) <= '9')
		{
			format++;
			tmp = atoi(format) - 1; //-1의 의미는 입력받는 문자(열)의 길이
			while (tmp--)
				write(1, " ", 1);
		}
	}
	return (0);
}

int ft_character(const char *format, char c)
{
	int tmp;

	while (*format)
	{
		while (*format != '%' && *format)
		{
			write(1, format, 1);
			format++;
		}
		if (*(format + 1) >= '0' && *(format + 1) <= '9' && *format == '%') //수정부분 width는 %와 c사이에 나와야함
		{
			ft_cwidth(format);
			format++;
		}
		if (*(format + 1) == 'c')
		{
			write(1, &c, 1);
			format += 2;
		}
	}
	return (0);
}
int main()
{
	char c = 'k';
	ft_character("ft_character==1234%9c123\n", c);
	printf("printf==1234%10c123\n", c);
}
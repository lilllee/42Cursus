/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:24:50 by kimts             #+#    #+#             */
/*   Updated: 2021/05/14 19:25:52 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
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

int ft_iwidth(const char *format, int n)
{
	int tmp;

	n = ft_int_len(n);
	while (*format)
	{
		while (*format != '%' && *format)
			format++;
		if (*(format + 1) >= '0' && *(format + 1) <= '9')
		{
			format++;
			tmp = atoi(format) - n; //음수일 경우 예외처리 해주어야함
			//-n의 의미는 입력받는 문자(열)의 길이
			//atoi(format)은 입력받은 width의 값
			while (tmp-- > 0)
				write(1, " ", 1);
		}
	}
	return (0);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		write(1, "8", 1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar('0' + n % 10);
	}
}

int ft_int(const char *format, int n)
{
	int tmp;
	int i = 0;
	while (*format)
	{
		while (*format != '%' && *format)
		{
			write(1, format, 1);
			format++;
		}
		if (*(format + 1) >= '0' && *(format + 1) <= '9' && *format == '%')
		{
			ft_iwidth(format, n);
			format += ft_int_len(atoi(format + 1));
		}
		if (*(format + 1) == 'd') //none_width
		{
			ft_putnbr(n);
			format += 2;
		}
	}
	return (0);
}
int main()
{
	int i = 123;
	ft_int("asd%100d\n", i);
	printf("asd%100d\n", i);
}
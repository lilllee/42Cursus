/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:24:50 by kimts             #+#    #+#             */
/*   Updated: 2021/05/17 17:46:23 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int			ft_int_len(int n)
{
	int		i;

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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
void		ft_putnbr(int n)
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

void			ft_int(const char *format, int n)
{
	int		tmp;
	int		i;

	i = 0;
	while (*format)
	{
		while (*format != '%' && *format)
		{
			write(1, format, 1);
			format++;
		}
		format++; //이때 format의 위치는 '%' 다음에 있음(width or d)
		if (*format == '-' && *(format + 1) >= '0' && *(format + 1) <= '9')//음수케이스
		{
			format += ft_int_len(atoi(format));
			if (*format == 'd') //none_width
			{
				ft_putnbr(n);
				format += 1;
			}
			ft_int_width(format, n);
		}
		else if (*format >= '0' && *format <= '9')
		{
			format += ft_int_len(atoi(format));
			ft_int_width(format, n);
			if (*format == 'd') //none_width
			{
				ft_putnbr(n);
				format += 1;
			}
		}
		else if (*format == 'd')
		{
			ft_putnbr(n);
			format += 1;
		}
	}
}
int main()
{
	int i = -123;
	
	printf("printf======asd%-5ddddd\n", i);
	ft_int("ft_int======asd%-5ddddd\n", i);
}
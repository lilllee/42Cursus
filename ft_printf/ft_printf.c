/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:39:10 by tekim             #+#    #+#             */
/*   Updated: 2021/05/17 13:48:52 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/*int			per_next(const char *c, ...)
{
	//if (c == 'c')
	
	//else if (c == 'd')
}
*/
void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar('0' + n % 10);
	}
}
int			ft_printf(const char *format, ...)
{
	va_list ap;

	char c;
	char *str;
	int i = 0;
	int k = 0;
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			write(1, &format[i], 1);
			i++;
		}
		if (format[i + 1] == 'd')
		{
			i++;
			k = va_arg(ap, int);
			ft_putnbr(k);
			i++;
		}
		else if (format[i + 1] == 'c')
		{
			i++;
			c = va_arg(ap, char);
			write(1, &c, 1);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			i++;
			str = va_arg(ap, char *);
			write(1, str, strlen(str));
			i++;
		}
		else if (format[i + 1] == 'u')
		{
			i++;
			k = va_arg(ap, unsigned int);
			ft_putnbr(k);
			i++;
		}
	}
	return (0);
}
int main(void)
{
	char i = 'k';
	char c = 'j';
	int num = -1234;
	char *str = "tekim";
	ft_printf("%s\n", str);
	ft_printf("asd%casd%c\n", i, c);
	ft_printf("%d\n", num);
	ft_printf("%u\n", num);
}
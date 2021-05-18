/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:01:11 by tekim             #+#    #+#             */
/*   Updated: 2021/05/18 15:34:45 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void		ft_int_precision(const char *format_p, int n)
{
	int		tmp;
	char	*ps;

	ps = ft_itoa(n);
	while (*format_p != '.' && *format_p) //format_p의 위치는 '.'임
		format_p++;
	format_p++;//'.' 다음의 숫자
	if (*format_p >= '0' && *format_p <= '9')
	{
		tmp = ft_atoi(format_p) - ft_strlen(ps);
		while (tmp-- > 0)
			write(1, "0", 1);
	}
}
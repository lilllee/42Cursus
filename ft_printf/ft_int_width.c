/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:19:11 by kimts             #+#    #+#             */
/*   Updated: 2021/05/17 17:34:55 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void		ft_int_width(const char *format_w, int n)
{
	int	tmp;
	char *ps; //n을 str로 전환한 값을 저장
	
	ps = ft_itoa(n);
	tmp = ft_atoi(format_w);//*format_w는 %[10]d,s,c 에서 10에 해당함

	if (tmp < 0)
		tmp *= -1;
	while (*format_w)
	{
		while (*format_w != '%' && *format_w)
			format_w++; // format의 값은 %에 위치해 있음
		format_w++;
		if ((*format_w >= '0' && *format_w <= '9') || *format_w == '-')
		{
			tmp = ft_atoi(format_w);
			if (tmp < 0)
				tmp *= -1;
			tmp -= ft_strlen(ps);
			while (tmp-- > 0)
				write(1, " ", 1);
		}
	}
}
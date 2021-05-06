/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:44:16 by tekim             #+#    #+#             */
/*   Updated: 2021/05/06 16:47:56 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_numsize(long n)
{
    int size;
    size = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n *= -1;
        size++;
    }
    while (n > 0)
    {
        n /= 10;
        size++;
    }
    return (size);
}
char    *ft_itoa(int n)
{
    char *str;
    int size;
    size = ft_numsize(n);
    if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
        return (0);
    str[size--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
    {
        n *= -1;
        str[0] = '-';
    }
    while (n > 0)
    {
        str[size] = (n % 10) + '0';
        n /= 10;
        size--;
    }
    return (str);
}

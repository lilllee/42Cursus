/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:15:46 by tekim             #+#    #+#             */
/*   Updated: 2021/05/07 14:41:45 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <string.h>
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	//*f는 함수형 포인터
	//s는 함수가 적용되어지는 문자열
	////unsigned int는 인덱스를 넘겨줬음 임의로
	char			*ret;
	unsigned int	len;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (NULL);
	len = strlen(s);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
char oddcheck(unsigned int i, char c)
{
    char x;
    x = 'x';
    if(i % 2 == 1)
        return(c);
    else
        return('0');
};
#include <stdio.h>
int main(void)
{
	char str1[] = "abcdefghijklmnopqrstuvyxyz";
	char *str2;
	str2 = ft_strmapi(str1, *oddcheck);
	printf("str2 : %s\n",str2);
}

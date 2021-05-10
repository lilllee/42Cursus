/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:23:53 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 13:14:20 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void                    *ft_memchr(const void *str, int c, unsigned int num)
{
      //c가 나오는 포인터의 주소를 반환 함
      //일치하지 않으면 NULL 반환함
      unsigned int      i;
      const void        *tmp;

      i = 0;
      tmp = str;
      while (i < num)
      {
            if (*((char *)tmp + i) == (char)c)
                  return((void *)tmp + i);
            i++;
      }
      return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main() 
{
      char* pch;
      char str[] = "Example string";
      pch = (char*)ft_memchr(str, 'p', strlen(str));

      if (pch != NULL)
            printf("'p' found at position %ld.\n", pch - str + 1);
      else
            printf("'p' not found.\n");

      return 0;
}
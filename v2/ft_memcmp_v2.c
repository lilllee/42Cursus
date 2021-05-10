/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:46:28 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 13:14:21 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int                     ft_memcmp(void *s1, void *s2, unsigned int num)
{
      //s1과 s2의 메모리 영역을 첫번째 바이트부터 
      //num바이트 만큼비교하여 최초로 다른 값을 만났을 때에 차이를 return함
      char              *tmp1;
      char              *tmp2;
      unsigned int      i;

      tmp1 = (char *)s1;
      tmp2 = (char *)s2;
      i = 0;
      while (i < num)
      {
            if (tmp1[i] != tmp2[i])
                  return (tmp1[i] - tmp2[i]);
            i++;
      }
      return (0);
}
#include <stdio.h>
#include <string.h>

int main() {
  char str1[256];
  char str2[256];
  int n;
  size_t len1, len2;

  printf("Enter a sentence: ");
  scanf("%s", str1);

  printf("Enter another sentence: ");
  scanf("%s", str2);

  len1 = strlen(str1);
  len2 = strlen(str2);

  n = memcmp(str1, str2, len1 > len2 ? len1 : len2);

  if (n > 0) {
    printf("'%s' is greater than '%s'.\n", str1, str2);
  } else if (n < 0) {
    printf("'%s' is less than '%s'.\n", str1, str2);
  } else {
    printf("'%s' is the same as '%s'.\n", str1, str2);
  }
  return 0;
}
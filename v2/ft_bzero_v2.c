/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:14:35 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 13:17:31 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        *ft_bzero(void *ptr, unsigned int size)
{
      unsigned int i;

      i = 0;
      while (i < size)
      {
            *((char *)ptr + i) = 0;
            i++;
      }
      return (ptr);
}
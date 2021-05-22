/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:06:48 by tekim             #+#    #+#             */
/*   Updated: 2021/05/22 18:53:58 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10000000
#endif



int 				get_next_line(int fd, char **line);
size_t 				ft_strlen(const char *s);
void				*ft_memcpy(void *dest, const void *src, size_t num);
//size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
//size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
//char *ft_strdup(char *s1);
char				*ft_strjoin(const char *s1, const char *s2);

#endif

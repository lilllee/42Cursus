/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:06:48 by tekim             #+#    #+#             */
/*   Updated: 2021/05/21 16:24:02 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

#ifndef OPEN_MAX
# define OPEN_MAX 10496
#endif

int get_next_line(int fd, char **line);

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
char *ft_strdup(char *s1);
char *ft_strjoin(char *s1, char *s2);

#endif

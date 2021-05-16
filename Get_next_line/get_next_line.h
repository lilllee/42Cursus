/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:06:48 by tekim             #+#    #+#             */
/*   Updated: 2021/05/14 18:24:27 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

int get_next_line(int fd, char **line);

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
char *ft_strdup(char *s1);
char *ft_strjoin(char *s1, char *s2);

#endif

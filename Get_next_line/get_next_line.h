/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:06:48 by tekim             #+#    #+#             */
/*   Updated: 2021/05/23 20:14:53 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

size_t			ft_strlen(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
int				is_newline(char *backup);
int				get_next_line(int fd, char **line);

#endif

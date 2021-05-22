/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:12:38 by tekim             #+#    #+#             */
/*   Updated: 2021/05/22 18:48:28 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
*/

size_t		ft_strlen(const char *s)
{
	int				i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}
char			*ft_strjoin(const char *s1, const char *s2)
{
	char			*s;
	int				i;
	
	if (!(s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	s[i] = 0;
	return (s);
}

int					get_next_line(int fd, char **line)
{
	static	char	buf[BUFFER_SIZE + 1];
	char			*s;
	char			*temp;
	int 			i;
	int				ret;
	
	i = 0;
	while (i < BUFFER_SIZE + 1)
		buf[i++] = 0;
	s = ft_strjoin("", "");
	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		if (buf[0] == '\n')
			break ;
		temp = ft_strjoin(s, buf);
		free(s);
		s = temp;
	}
	*line = s;
	return (ret);
}

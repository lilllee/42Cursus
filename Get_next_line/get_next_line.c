/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:12:38 by tekim             #+#    #+#             */
/*   Updated: 2021/05/23 19:43:10 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				is_newline(char *backup)
{
	int			i;

	i = 0;
	if (!backup)
		return (0);
	while (backup[i])
	{
		if (backup[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char			*ft_back(char *backup)
{
	char		*ret;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!backup)
		return (0);
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!backup[i])
	{
		free(backup);
		return (0);
	}
	if (!(ret = malloc(sizeof(char) * ((ft_strlen(backup) - i) + 1))))
		return (0);
	i++;
	while (backup[i])
		ret[j++] = backup[i++];
	ret[j] = '\0';
	free(backup);
	return (ret);
}

char			*ft_front(char *backup)
{
	int			i;
	char		*ret;

	i = 0;
	if (!backup)
		return (0);
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!(ret = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (backup[i] && backup[i] != '\n')
	{
		ret[i] = backup[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int				get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*backup;
	int			ret;

	ret = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (!is_newline(backup) && ret != 0)
	{
		if ((ret = read(fd, buf, BUFFER_SIZE)) == -1)
		{
			free(buf);
			return (-1);
		}
		buf[ret] = '\0';
		backup = ft_strjoin(backup, buf);
	}
	free(buf);
	*line = ft_front(backup);
	backup = ft_back(backup);
	if (ret == 0)
		return (0);
	return (1);
}

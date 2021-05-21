/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:12:38 by tekim             #+#    #+#             */
/*   Updated: 2021/05/21 19:45:20 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
# define BUFFER_SIZE 15
# define OPEN_MAX 10496


char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*result;

	if (!s1 || !s2)
		return (0);
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (!(result = (char *)malloc(len1 + len2 + 1)))
		return (0);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = 0;
	return (result);
}

int					is_newline(char *backup)
{
	int				i;
	int				size;
	i = 0;
	while (backup[i] != '\0')
	{
		if (backup[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int					cut_newline(char **backup, int len, int fd)
{
	char			*tmp;
	
	strlcpy(tmp, backup[fd], len);
	//tmp[len + 1] = '\0';
	if (*backup == *(backup + len + 1))
		return (1);
	return (0);
}

int					get_next_line(int fd, char **line)
{
	static	char	*backup[OPEN_MAX];
	char			buf[BUFFER_SIZE + 1];
	ssize_t			readsize; // 읽은 바이트 수
	int				len;

	if (fd < 0|| line == 0 || BUFFER_SIZE <= 0)
		return (-1);
	while ((readsize = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[readsize] = '\0';
		backup[fd] = ft_strjoin(backup[fd], buf);
		if (len == is_newline(backup[fd]) >= 0)
			return (cut_newline(backup, len ,fd));
	}
	return (0);
}
int	main(void)
{
	int		temp;
	int		fd;
	char	*line;
	fd = open("test.txt", O_RDONLY);
	while ((temp = (get_next_line(fd, &line)) > 0))
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	close(fd);
	return (0);
}
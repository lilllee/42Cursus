#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

static int		ft_strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}

static char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;

	if (!(s = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	s[i] = 0;
	return (s);
}

int get_next_line(char **line)
{
	char	buf[2];
	char	*s;
	char	*temp;
	int 	i, ret;

	// set 0
	i = 0;
	while (i < 2)
		buf[i++] = 0;
	// buf[0] = 0;
	// read
	s = ft_strjoin("", "");
	while ((ret = read(0, buf, 1)) > 0)
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

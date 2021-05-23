#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 2

size_t			ft_strlen(const char *s)
{
	int			i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void			*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (src == NULL && dest == NULL)
		return (NULL);
	s = src;
	d = dest;
	i = 0;
	if (dest > src)
	{
		while (num)
		{
			if (num < 1)
				break;
			*(d + num - 1) = *(s + num - 1);
			num--;
		}
	}
	while (i < num)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*ret;

	if (!s1 && !s2)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ret = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ret)
		return (0);
	ft_memmove(ret, s1, len1);
	ft_memmove(ret + len1, s2, len2);
	ret[len1 + len2] = '\0';
	free((char *)s1);
	return (ret);
}

int				is_newline(char *backup) //뉴라인이 있는지 검사
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

char			*ft_back(char *backup) //뉴라인 뒷부분을 저장함
{
	char		*ret;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!backup)
		return (0);
	while (backup[i] && backup[i] != '\n') //뉴라인 찾음
		i++;
	if (!backup[i]) //뉴라인이 없는 경우
	{
		free(backup);
		return (0);
	}
	if (!(ret = malloc(sizeof(char) * ((ft_strlen(backup) - i) + 1)))) //전체 길이에서 뉴라인 나온 부분 뒤에 있는 글자 수 만큼 할당
		return (0);
	i++; //뉴라인 다음 글자부터 시작
	while (backup[i]) //ret에 뉴라인 다음을 저장
		ret[j++] = backup[i++];
	ret[j] = '\0';
	free(backup);
	return (ret);
}

char			*ft_front(char *backup) //뉴라인 까지 저장하는 함수
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
	while (backup[i] && backup[i] != '\n') //ret에 뉴라인 나오기 전까지 저장 ex) "asdasd\n"이면 "asdasd"까지 저장
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
	if (fd < 0 || !line || BUFFER_SIZE <= 0) //read에 들어가는 값이 유효하지 않을 때
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1)))) // 할당 실패시 읽어올 수 없음
		return (-1);
	while (!is_newline(backup) && ret != 0) //검사할 파일에 뉴라인이 있는지 확인함 EOF에 도달하면 탈출함 read함수에서 EOF에 도달하면 리턴은 0이기 때문
	{
		if ((ret = read(fd, buf, BUFFER_SIZE)) == -1) //읽기에 실패했을 때
		{
			free(buf);
			return (-1);
		}
		buf[ret] = '\0';
		backup = ft_strjoin(backup, buf);
	}
	free(buf);
	*line = ft_front(backup); //line에 뉴라인 전까지 저장
	backup = ft_back(backup); //backup에 뒤쪽 저장
	if (ret == 0)
		return (0);
	return (1);
}

int main(void)
{
	int temp;
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	while ((temp = (get_next_line(fd, &line)) > 0))
	{
		printf("%s\n", line);
		free(line);
	}
	//printf("%s\n", line);
	free(line);
	close(fd);
	return (0);
}

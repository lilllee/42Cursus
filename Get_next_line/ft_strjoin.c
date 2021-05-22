#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char			*ft_strjoin(char *s1, char *s2)
{
	size_t		len1;
	size_t		len2;
	char		*result;

	if (!s1 || !s2)
		return (0);
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = 0;
	return (result);
}

int main(void)
{
	char *s = "";
	char *a = "123";
	printf("%s\n", ft_strjoin(s, a));
}
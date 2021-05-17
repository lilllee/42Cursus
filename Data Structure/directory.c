#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#define CAPACITY 100   // 최대 100명의 전화번호를 저장 가능
#define BUFFER_SIZE 20   //입력받을 문자열 길이 20까지

char		*names[CAPACITY]; // name
char		*numbers[CAPACITY]; // phone numbers
int			n = 0;              //number of people

void		add();
void		find();
void		status();
void		remove1();

int			main(void)
{
	char	command[BUFFER_SIZE];
	
	while (1) 
	{
		printf("$ ");
		scanf("%s", command);
		
		if (strcmp(command, "add") == 0)
			add();
		else if (strcmp(command, "find") == 0)
			find();
		else if (strcmp(command, "status") == 0)
			status();
		else if (strcmp(command, "delete") == 0)
			remove1();
		else if (strcmp(command, "exit") == 0)
			break ;
	}
	return (0);
}

void		add()
{
	char	buf1[BUFFER_SIZE]; 
	char	buf2[BUFFER_SIZE];

	scanf("%s", buf1);
	scanf("%s", buf2);	
	names[n] = strdup(buf1);
	numbers[n] = strdup(buf2);
	n++;
	printf("%s 는 성공적으로 추가되었습니다\n", buf1);
}

void		find()
{
	char	buf[BUFFER_SIZE];

	scanf("%s", buf);
	
	int		i;
	for (i = 0;i < n; i++)
	{
		if(strcmp(buf, names[i]) == 0)
			printf("%s\n", numbers[i]);
		return ;
	}
}

void		status()
{
	int		i;
	for (i = 0; i < n; i++)
		printf("%s %s\n",names[i], numbers[i]);
	printf("Total %d people\n", n);
}

void		remove1()
{
	char	buf[BUFFER_SIZE];
	scanf("%s", buf);
	
	int		i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(buf, names[i]) == 0)
		{
			names[i] = names[n - 1];// 맨 마지막에 삭제된 자리로 옮김
			numbers[i] = numbers[n - 1];
			n--;
			printf("'%s' is deleted. \n", buf);
			return ;
		}
	}
	printf("'%s' none exists\n", buf);
}

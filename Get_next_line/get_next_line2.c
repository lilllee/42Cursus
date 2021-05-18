/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimts <kimts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:58:32 by kimts             #+#    #+#             */
/*   Updated: 2021/05/14 18:24:24 by kimts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int get_next_line(int fd, char *line)
{
	line = malloc(sizeof(char) * line_size);
}

int get_next_line(int fd, char **line)
{
	*line = malloc(sizeof(char) * line_size);
	static int a = 0;
}

int main()
{
	char *new_line;
	get_next_line(fd, &new_line);
}
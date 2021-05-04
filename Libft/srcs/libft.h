/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:27:41 by tekim             #+#    #+#             */
/*   Updated: 2021/05/04 16:35:26 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strlen(const char *str);
int				ft_memcmp(void *s1, void *s2, unsigned int num);

char			**ft_split(char const *s, char c);
char			*ft_strdup(char *s1);
char			*ft_strnstr(const char *str, const char *substr, unsigned int len);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

void			*ft_calloc(unsigned int size, unsigned int count);
void			*ft_memcpy(void *dest, const void *src, unsigned int num);
void			*ft_memmove(void *dest, const void *src, unsigned int num);
void			*ft_memset(void *ptr, int value, unsigned int size);
void			*ft_bzero(void *ptr, unsigned int size);
void			*ft_memccpy(void *d, const void *s, int c, unsigned int n);
void			*ft_memchr(const void *str, int c, unsigned int num);

const char		*ft_strchr(const char *str, int c);
const char		*ft_strrchr(const char *str, int c);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif

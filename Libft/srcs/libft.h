/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:27:41 by tekim             #+#    #+#             */
/*   Updated: 2021/05/06 18:22:57 by tekim            ###   ########.fr       */
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
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strlen(const char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t num);

char			**ft_split(char const *s, char c);
char			*ft_strdup(char *s1);
char			*ft_strnstr(const char *str, const char *substr, size_t len);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_itoa(int n);

void			*ft_calloc(unsigned int size, unsigned int count);
void			*ft_memcpy(void *dest, const void *src, size_t num);
void			*ft_memmove(void *dest, const void *src, size_t num);
void			*ft_memset(void *ptr, int value, unsigned int size);
void			*ft_bzero(void *ptr, unsigned int size);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, unsigned int num);

size_t			ft_strlcpy(char *dest, char *src, size_t size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif

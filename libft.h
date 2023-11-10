#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>


size_t	ft_strlen(const char *s);
void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void  *ft_memset(void *b,int c, size_t len);
void  ft_bzero(void *s,size_t n);
void  *ft_memmove(void *dst, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void  *ft_memchr(const void *s, int c, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *s,int c);
char *ft_strrchr(const char *s,int c);
int	ft_atoi(const char *str);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s,unsigned int start,size_t len);
char	*ft_itoa(int n);

#endif

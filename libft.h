#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


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

#endif

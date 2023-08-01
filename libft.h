#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *dest, const void * src, size_t n);
void *ft_calloc(size_t nitems, size_t size);
char *ft_strdup(const char *string);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int nb);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
#endif
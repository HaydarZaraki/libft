#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include<string.h>

int ft_strlen(char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_toupper(int c);
int ft_atoi(const char *str);
void ft_bzero(void *str, size_t n);
void *ft_memset(void *str, int c ,size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
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
void ft_putendl_fd(char *s, int fd);
char * ft_strnstr(const char *big, const char *little, size_t len);
void ft_putnbr_fd(int n, int fd);
#endif
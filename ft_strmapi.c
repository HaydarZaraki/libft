#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    i = 0;
    int len = ft_strlen((char *) s);
    char* result = malloc(len + 1);
    if (result == NULL)
    {
        return NULL;
    }
    *result = *s;
    while (i < len)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}
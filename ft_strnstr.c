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

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')
    {
        return (char *) big;
    }
    if (*big == '\0' || len == 0)
    {
        return NULL;
    }
    return (char *) big;
}
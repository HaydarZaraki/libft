#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <libft.h>

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

char *ft_strtrim(char const *s1, char const *set)
{
    if (*set == '\0')
    {
        char* empty = (char*)malloc(sizeof(char));
        *empty = '\0';
        return empty;
    }
    char *tmp;
    while (*s1 != '\0')
    {
        if (ft_strchr(set,*s1) != 0 || *s1 == 32)
        {
            tmp = (char *) s1;
            tmp++;
        }
        s1++;
    }
    char *result = malloc((ft_strlen(tmp) + 1) * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }
    *result = *tmp;
    return (char *) result;
}

// int main(void)
// {
//     char * s = ft_strtrim("   xxxtripouille", " x");
//     printf("String -> %s",s);
//     return 0;
// }
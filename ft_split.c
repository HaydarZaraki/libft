#include <stdio.h>
#include "libft.h"

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int delimiters_count(char* str, char c)
{
    int len;
    int j;
    len = 0;
    j = 0;
    if (str[0] != c && str[0] != '\0')
        len++;
    while(str[j] != '\0')
    {
        if (str[j] == c && str[j+1] != '\0' && str[j+1] != c)
            len++;
        j++;
    }
    return len;
}


int get_last(char *str, int start, char sep)
{
    int i;
    i = start;
    while (str[i] != sep && str[i] != '\0')
        i++;
    return i;
}

char **ft_split(char const *s, char c)
{
    int len = delimiters_count((char *) s,c);
    char **strs = malloc((len + 1) * sizeof(char *));
    int i;
    i = 0;
    int start;
    start = 0;
    int last;
    last = 0;
    while (i < len)
    {
        while (s[start] == c)
          start++;
        last = get_last((char *) s, start, c);
        strs[i] = malloc((last - start) * sizeof(char) + 1);
        ft_strncpy(strs[i], (char *) s + start, last - start);
        strs[i][last - start] = '\0';
        i++;
        start = last;
    }
    strs[i] = NULL;
    return strs;
}

// int main()
// {
//     char **strs = ft_split(" test  ", ' ');
//     int i;
//     i = 0;
//     while (strs[i] != NULL)
//     {
//         printf("%s\n", strs[i]);
//         i++;
//     }
//     return 0;
// }
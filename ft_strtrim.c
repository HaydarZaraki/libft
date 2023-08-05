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

char *ft_strtrim(char const *s1, char const *set)
{
   int start = 0;
    int end = strlen(s1);
    while (ft_strchr(set,s1[start]) != 0  && s1[start] != '\0')
      start++;
    while (ft_strrchr(set,s1[end]) != 0  && end > 0 )
      end--;
    if (*s1 == '\0' || end < start)
    {
        char* empty = (char*)malloc(sizeof(char));
        *empty = '\0';
        return empty;
    }
    char *result = malloc((end - start) + 2 * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }
    ft_strncpy(result, (char *) s1 + start, end + 1 - start);
    result[end + 1 - start] = '\0';
    return (char *) result;
}
// int main(void)
// {
//     char * s = ft_strtrim("  ", " ");
//     printf("String -> %s",s);
//     return 0;
// }
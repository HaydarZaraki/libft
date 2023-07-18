#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{   
    size_t le = len - start;
    if (len < start)
    {
        return (char *) s;
    }
    char *dest = malloc(sizeof(char) * (le + 1));
    char *first;
    if (dest != NULL)
    {
        first = dest;
        while(start < len && (s[start] != '\0'))
        {
            *dest = s[start];
            start++;
            dest++;
        }
        *dest = '\0';
        return first;
    }
    return 0;
}

// int main()
// {
//     // char src[] = "substr function Implementation";
 
//     // int m = 7;
//     // int n = 12;
 
//     char* dest = ft_substr("tripouille", 100, 1);
//     printf("%s",dest);
 
//     return (0);
// }
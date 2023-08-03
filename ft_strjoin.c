#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    int l1 = ft_strlen((char*) s1);
    int l2 = ft_strlen((char*) s2);
    char *joined = malloc(l1 + l2 + 1);
    char *first = joined;
    if ( joined != 0 )
    {
        while (*s1 != '\0')
        {
            *joined = *s1;
            joined++;
            s1++;
        }
        while (*s2 != '\0')
        {
            *joined = *s2;
            joined++;
            s2++;
        }
        *joined = '\0';
        return first;
    }
    return 0;
}
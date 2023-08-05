#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')
        return (char *) big;
    if (*big == '\0' || len == 0)
        return NULL;
    size_t i;
    i = 0;
    size_t little_len;
    little_len = ft_strlen((char *)little);
    while (i < len && len - i >= little_len )
    {
        if(ft_strncmp((char *) big,(char *) little,little_len) == 0)
            return (char *) big;
        i++;
        big++;
    }
    return NULL;
}
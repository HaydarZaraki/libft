#include <stdlib.h>
#include <libft.h>

void *ft_memmove(void *dest, const void * src, size_t n)
{
    char *d = (char*) dest;
    char s[n];
    ft_memcpy(s, src, n);
    size_t i;
    i = 0;
    while(i < n)
    {   
        d[i] = s[i];
        i++;
    }
    return (char*) dest;
}
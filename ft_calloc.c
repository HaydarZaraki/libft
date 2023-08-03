#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *p;
    p = malloc(nitems * size);
    if (p == NULL)
        return 0;
    else
    {
        ft_bzero(p, (nitems * size));
        return (p);
    }
    
}
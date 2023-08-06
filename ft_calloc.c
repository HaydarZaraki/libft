#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    if ((nitems > 2147483647 || size > 2147483647) && ((nitems * size) != 0))
        return 0;
    void *p;
    p = (void *)malloc(nitems * size);
    if (!p)
        return 0;
    ft_bzero(p, (nitems * size));

    return (p);
}
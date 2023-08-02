#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size)
{
    if(nitems > 2147483627 || size > 2147483627)
    {
      return 0;
    }
    void *p;
    // size_t s = (unsigned) size;
    // size_t n = (unsigned) nitems;
    p = malloc(nitems * size);
    if ( p == NULL )
    {
        return 0;
    }
    else
    {
        return p;
    }
    
}
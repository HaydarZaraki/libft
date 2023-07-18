#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size)
{
    const size_t max_value = -5;
    if(nitems >= max_value && size >= max_value)
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
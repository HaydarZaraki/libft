#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    i = 0;
    int len = ft_strlen((char *) s);
    while (i < len)
    {
        f(i, s);
        s++;
        i++;
    }
}
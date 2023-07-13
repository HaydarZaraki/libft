#include <stdlib.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char *ptr = (char *) str;
    size_t i;
    i = 0;

    while (*ptr != '\0' && i < n)
    {
        if (*ptr == c)
        {
            return ptr;
        }
        ptr++;
        i++;
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main ()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = memchr(str, ch, 11);

    printf("String after |%c| is - |%s|\n", ch, ret);

    char *ter;

    ter = ft_memchr(str, ch, 11);
    printf("String after |%c| is - |%s|\n", ch, ter);

    return(0);
}
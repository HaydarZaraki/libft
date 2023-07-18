#include <stdlib.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char *ptr = (char *) str;
    size_t i;
    i = 0;
    while (i < n)
    {
        if (*ptr == (unsigned char) c)
        {
            return ptr;
        }
        ptr++;
        i++;
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     // const char str[] = "http://www.tutorialspoint.com";
//     const char ch = 't';
//     char str[] = {0, 1, 2 ,3 ,4 ,5};
//     char *ret;

//     ret = memchr(str, 2 + 256, 3);

//     printf("String |%s|\n",ret);

//     char *ter;

//     ter = ft_memchr(str, 2 + 256, 3);
//     printf("String |%s|\n",ter);

//     return(0);
// }
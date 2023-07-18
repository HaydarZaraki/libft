#include <stdlib.h>

void ft_bzero(void *str, size_t n)
{
    if (str != NULL && n > 0)
    {

        char *ptr = (char *)str;
        size_t i;
        i = 0;
        while (i < n)
        {
            ptr[i] = 0;
            i++;
        }
    }
}

// #include <strings.h>
// #include <stdio.h>

// int main(void)
// {
//     // char *test = malloc(1);
//     // bzero(test, 5);

//     char *t = malloc(4);
//     ft_bzero(t, 5);
// }
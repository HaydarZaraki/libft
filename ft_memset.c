#include <stdlib.h>

void ft_memset(void *str, int c ,size_t n)
{
    if (str != NULL && n > 0)
    {

        char *ptr = (char *)str;
        size_t i;
        i = 0;
        while (i < n)
        {
            ptr[i] = c;
            i++;
        }
    }
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char test[50];
//     strcpy(test,"This is string.h library function");
//     puts(test);
//     memset(test, '$' ,60);
//     puts(test);

//     char t[50];
//     strcpy(t,"This is string.h library function");
//     puts(t);
//     ft_memset(t,'$',60);
//     puts(t);
// }

#include <stdlib.h>

#include <stdio.h>
#include<string.h>

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    char *d = (char*) dest;
    char *s = (char*) src;
    size_t i;
    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (char*) dest;
}

int    ft_strlen(char *str)
{
    int    i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(const char *string)
{
    int len = ft_strlen((char*) string);
    char *dup = malloc(len+1);
    ft_memcpy(dup,string,len+1);
    return dup;
}
// int main() {
//    char *str = "Helloworld";
//    char *result;
//    result = ft_strdup(str);
//    printf("\nThe string : %s", result);
//    return 0;
// }



#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <libft.h>

// char *ft_strchr(const char *str, int c)
// {
//     while (*str != '\0')
//     {
//         if (*str == (unsigned char) c)
//         {
//             return (char *) str;
//         }
//         str++;
//     }
//     if (*str == '\0' && c == 0)
//     {
//         return (char *) str;
//     }
//     return 0;
// }


char *ft_strtrim(char const *s1, char const *set)
{
    char *tmp;
    while (*s1 != '\0')
    {
        if (ft_strchr(set,*s1) != 0 || *s1 == 32)
        {
            tmp = (char *) s1;
            tmp++;
        }
        s1++;
    }
    return (char *) tmp;
}

// int main(void)
// {
//     char * s = ft_strtrim("   xxxtripouille", " x");
//     printf("String -> %s",s);
//     return 0;
// }
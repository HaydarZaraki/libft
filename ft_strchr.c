#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == (unsigned char) c)
        {
            return (char *) str;
        }
        str++;
    }
    if (*str == '\0' && c == 0)
    {
        return (char *) str;
    }
    return 0;
}

// #include <stdio.h>  
// #include <string.h>  
// int main ()  
// {  
//     const char str[] = "Use strchr() function in C.";  
//     const char ch = 's'; // it is searched in str[] array  
//     char *ptr; // declare character pointer ptr  
      
//     printf (" Original string is: %s \n", str);  
//     // use strchr() function and pass str in which ch is to be searched  
//     ptr = strchr( str, 0);  
//     printf (" The first occurrence of the '%c' in '%s' string  is: '%s' ", ch, str, ptr);

//     char *pt;
//     pt = ft_strchr(str, 0);
//     printf (" The first occurrence of the '%c' in '%s' string  is: '%s' ", ch, str, pt);
    
//     return 0;  
// }
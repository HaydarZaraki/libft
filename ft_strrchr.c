char *ft_strrchr(const char *str, int c)
{
    const char *ptr = str;

    // Move the pointer to the end of the string
    while (*ptr != '\0') {
        ptr++;
    }

    // Iterate over the string in reverse order
    while (ptr >= str) {
        if (*ptr == c)
        {
            return (char *) ptr;
        }
        ptr--;
    }
    return 0;
}

#include <stdio.h>  
#include <string.h>  
int main ()  
{  
    const char str[] = "Use strchr() function in C.";  
    const char ch = 's'; // it is searched in str[] array
    char *ptr; // declare character pointer ptr  
      
    printf (" Original string is: %s \n", str);  
    // use strchr() function and pass str in which ch is to be searched  
    ptr = strrchr( str, ch);  
    printf ("string  is: '%s' ", ptr);

    char *pt;
    pt = ft_strrchr(str, ch);
    printf ("string  is: '%s' ", pt);
    
    return 0;  
}
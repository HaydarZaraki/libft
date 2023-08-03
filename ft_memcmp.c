#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *s1 = (unsigned char *) str1;
    unsigned char *s2 = (unsigned char *) str2;

    size_t i;
    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        else
        {
            i++;
        }
        
    }
    return 0;    
}

// #include <string.h>

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;
//    int ret1;

//    memcpy(str1, "a23486", 5);
//    memcpy(str2, "123456", 5);

//    ret = memcmp(str1, str2, 12);

//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }

//    ret1 = ft_memcmp(str1, str2, 12);
//    if(ret1 > 0) {
//       printf("\nstr2 is less than str1");
//    } else if(ret1 < 0) {
//       printf("\nstr1 is less than str2");
//    } else {
//       printf("\nstr1 is equal to str2");
//    }

   
//    return(0);
// }
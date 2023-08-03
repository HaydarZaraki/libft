#include "libft.h"

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



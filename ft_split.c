#include "libft.h"
#include <stdio.h>

int delimiters_count(char* str, char c)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(str[j] != '\0')
    {
        if (str[j] == c && j != 0 && str[j+1] != '\0')
            i++;
        j++;
    }
    return i;
}

int *get_indexes(char* str, char c)
{
    
}

char **ft_split(char const *s, char c)
{


}

int main()
{
    int i = delimiters_count(",hello, world, ",',');
    printf("delimiter is %d", i);
    return 0;
}
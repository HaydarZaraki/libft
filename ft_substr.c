#include <stdlib.h>
#include <stdio.h>

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

char* ft_substr(const char* s, int start, int len) {
    int string_len;
    string_len = ft_strlen((char *) s);
    if (start < 0 || start >= string_len || len <= 0) {
        char* empty = (char*)malloc(sizeof(char));
        *empty = '\0';
        return empty;
    }
    if (len > (string_len - start)) {
        len = string_len - start; // Trim if it exceed the string length
    }
    char* result = (char*)malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    int i;
    i = 0;
    while(i < len) {
        result[i] = s[start + i];
        i++;
    }
    result[len] = '\0';
    return result;
}
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
 {
    unsigned int string_len;
    string_len = ft_strlen((char *) s);
    if (start >= string_len || len <= 0) {
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
    unsigned int i;
    i = 0;
    while(i < len) {
        result[i] = s[start + i];
        i++;
    }
    result[len] = '\0';
    return result;
}
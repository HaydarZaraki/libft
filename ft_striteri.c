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

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    i = 0;
    int len = ft_strlen((char *) s);
    while (i < len)
    {
        f(i, s);
        s++;
        i++;
    }
}
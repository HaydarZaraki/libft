#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
        char *num;
        num = ft_itoa(n);
        if (*num == '\0')
        {
                write(fd, "", 1);
        }
        while (*num != '\0')
        {
                write(fd, num, 1);
                num++;
        }
}
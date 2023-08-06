#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
        // char *str;
        // str = ft_itoa(n);
        // ft_putstr_fd(str, fd);
        // free(str);

        long num;
        num = n;

        if (num < 0)
        {
                write(fd, "-", 1);
                num *= -1;
        }
        if (num > 9)
        {
                ft_putnbr_fd(num / 10, fd);
                ft_putnbr_fd(num % 10, fd);
        }
        else
        {
                num += 48;
                write(fd, &num, 1);
        }
}
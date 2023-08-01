#include <stdlib.h>

int	len(long n)
{
	int	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
    if (n == 0)
    {
        len++;
    }
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return(len);
}
char	*ft_itoa(int num)
{
	char	*str;
	long	n;
	int	i;

	n = num;
	i = len(n);
	str = (char *)malloc(i + 1);
    if (str == NULL)
    {
		return(NULL);
    }
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
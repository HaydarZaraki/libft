// #include <stdio.h>
// #include <ctype.h>

int ft_isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return 1;
        else
                return 0;
}

// int main(void)
// {
//         char c1 = '9';
//         char c2 = '0';
//         char c3 = '_';
//         printf("\nft -> %d",ft_isdigit(c1));
//         printf("\nft -> %d",ft_isdigit(c2));
//         printf("\nft -> %d",ft_isdigit(c3));

//         printf("\n\n\n\nC1 -> %d",isdigit(c1));
//         printf("\nC1 -> %d",isdigit(c2));
//         printf("\nC1 -> %d",isdigit(c3));
//         return 0;
// }
// #include <stdio.h>
// #include <ctype.h>

int ft_isprint(int c)
{
        if ((c >= 0 && c <= 31) || c >= 127)
                return 0;
        else
                return 1;
}

// int main(void)
// {
//         char c1 = '}';
//         char c2 = '\n';
//         char c3 = '\t';
//         printf("\nft -> %d",ft_isprint(c1));
//         printf("\nft -> %d",ft_isprint(c2));
//         printf("\nft -> %d",ft_isprint(c3));

//         printf("\n\n\n\nC1 -> %d",isprint(c1));
//         printf("\nC1 -> %d",isprint(c2));
//         printf("\nC1 -> %d",isprint(c3));
//         return 0;
// }
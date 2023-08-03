// #include <stdio.h>
// #include <ctype.h>

int ft_isalpha(int c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return 1;
        else
                return 0;
}


// int main(void)
// {
//         char c1 = 'A';
//         char c2 = 'q';
//         char c3 = '_';
//         printf("\nft -> %d",ft_isalpha(c1));
//         printf("\nft -> %d",ft_isalpha(c2));
//         printf("\nft -> %d",ft_isalpha(c3));

//         printf("\n\n\n\nC1 -> %d",isalpha(c1));
//         printf("\nC1 -> %d",isalpha(c2));
//         printf("\nC1 -> %d",isalpha(c3));
//         return 0;
// }
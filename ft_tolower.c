/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:29:39 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:29:40 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	else
	{
		return (c);
	}
}

// int main(void)
// {
//         char c1 = 'a';
//         char c3 = 'C';
//         char c2 = 'b';
//         printf("\nft -> %c",ft_tolower(c1));
//         printf("\nft -> %c",ft_tolower(c2));
//         printf("\nft -> %c",ft_tolower(c3));

//         printf("\n\n\n\nC1 -> %c",tolower(c1));
//         printf("\nC1 -> %c",tolower(c2));
//         printf("\nC1 -> %c",tolower(c3));
//         return 0;

// }
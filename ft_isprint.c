/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:43:20 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/08 12:24:36 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//         char c1 = '}';
//         char c2 = '\n';
//         char c3 = '\t';
//         printf("\nft -> %d",ft_isprint(EOF));
//         printf("\nft -> %d",ft_isprint(c2));
//         printf("\nft -> %d",ft_isprint(c3));

//         printf("\n\n\n\nC1 -> %d",isprint(EOF));
//         printf("\nC1 -> %d",isprint(c2));
//         printf("\nC1 -> %d",isprint(c3));
//         return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:41:56 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 21:42:26 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//         char c1 = '9';
//         char c2 = '0';
//         char c3 = '_';
//         printf("\nft -> %d",ft_isascii(c1));
//         printf("\nft -> %d",ft_isascii(c2));
//         printf("\nft -> %d",ft_isascii(127));

//         printf("\n\n\n\nC1 -> %d",isascii(c1));
//         printf("\nC1 -> %d",isascii(c2));
//         printf("\nC1 -> %d",isascii(127));
//         return 0;
// }
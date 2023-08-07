/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:34:29 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:35:39 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| ((c >= '0' && c <= '9')))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//         char c1 = 'a';
//         char c2 = '@';
//         char c3 = '_';
//         printf("\nft -> %d",ft_isalnum(c1));
//         printf("\nft -> %d",ft_isalnum(c2));
//         printf("\nft -> %d",ft_isalnum(c3));

//         printf("\n\n\n\nC1 -> %d",ft_isalnum(c1));
//         printf("\nC1 -> %d",ft_isalnum(c2));
//         printf("\nC1 -> %d",ft_isalnum(c3));
//         return 0;
// }
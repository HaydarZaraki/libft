/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:30:17 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:30:18 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
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
//         printf("\nft -> %c",ft_toupper(189));
//         printf("\nft -> %c",ft_toupper(c2));
//         printf("\nft -> %c",ft_toupper(c3));

//         printf("\n\n\n\nC1 -> %c",toupper(189));
//         printf("\nC1 -> %c",toupper(c2));
//         printf("\nC1 -> %c",toupper(c3));
//         return 0;

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:36:00 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 22:36:12 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	if (str != NULL && n > 0)
	{
		i = 0;
		while (i < n)
		{
			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char test[50];
//     strcpy(test,"This is string.h library function");
//     puts(test);
//     memset(test, '$' ,60);
//     puts(test);

//     char t[50];
//     strcpy(t,"This is string.h library function");
//     puts(t);
//     ft_memset(t,'$',60);
//     puts(t);
// }

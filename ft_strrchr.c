/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:17:14 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:31:39 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr = str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (ptr >= str)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((char *)ptr);
		}
		ptr--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     const char str[] = "Use strchr() function in C.";
//     const char ch = 's'; // it is searched in str[] array
//     char *ptr; // declare character pointer ptr

//     printf (" Original string is: %s \n", str);
//     // use strchr() function and pass str in which ch is to be searched
//     ptr = strrchr( str, ch);
//     printf ("string  is: '%s' ", ptr);

//     char *pt;
//     pt = ft_strrchr(str, ch);
//     printf ("string  is: '%s' ", pt);

//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:53:38 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 20:55:37 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*ptr;
	size_t	i;

	if (str != NULL && n > 0)
	{
		ptr = (char *)str;
		i = 0;
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}

// #include <strings.h>
// #include <stdio.h>

// int main(void)
// {
//     // char *test = malloc(1);
//     // bzero(test, 5);

//     char *t = malloc(4);
//     ft_bzero(t, 5);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:23:21 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 23:23:39 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		len;
	char	*dup;

	len = ft_strlen((char *)string);
	dup = malloc(len + 1);
	ft_memcpy(dup, string, len + 1);
	return (dup);
}

// int main() {
//    char *str = "Helloworld";
//    char *result;
//    result = ft_strdup(str);
//    printf("\nThe string : %s", result);
//    return 0;
// }

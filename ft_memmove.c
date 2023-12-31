/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:33:36 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 03:34:02 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (!dest || !src)
		return (0);
	s = (char *)malloc(sizeof(char) * n);
	d = (char *)dest;
	ft_memcpy(s, src, n);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	free(s);
	return ((char *)dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:16:06 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:16:26 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0' || len == 0)
		return (NULL);
	i = 0;
	little_len = ft_strlen((char *)little);
	while (i < len && len - i >= little_len)
	{
		if (ft_strncmp((char *)big, (char *)little, little_len) == 0)
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}

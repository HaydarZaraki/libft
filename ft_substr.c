/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:27:23 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:28:55 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	string_len;
	unsigned int	i;
	char			*empty;
	char			*result;

	string_len = ft_strlen((char *)s);
	if (start >= string_len || len <= 0)
	{
		empty = (char *)malloc(sizeof(char));
		*empty = '\0';
		return (empty);
	}
	if (len > (string_len - start))
		len = string_len - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[len] = '\0';
	return (result);
}

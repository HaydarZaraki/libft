/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:26:15 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 00:33:12 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	join_op(char *s1, char *joined, char *s2)
{
	while (*s1 != '\0')
	{
		*joined = *s1;
		joined++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*joined = *s2;
		joined++;
		s2++;
	}
	*joined = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*first;
	char	*joined;

	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	joined = malloc(l1 + l2 + 1);
	first = joined;
	if (joined != 0)
	{
		join_op((char *)s1, joined, (char *)s2);
		return (first);
	}
	return (0);
}

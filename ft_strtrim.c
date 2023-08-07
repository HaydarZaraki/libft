/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:18:26 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:25:02 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*empty;
	char	*result;

	start = 0;
	end = strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && s1[start] != '\0')
		start++;
	while (ft_strrchr(set, s1[end]) != 0 && end > 0)
		end--;
	if (*s1 == '\0' || end < start)
	{
		empty = malloc(sizeof(char));
		*empty = '\0';
		return (empty);
	}
	result = malloc((end - start) + 2 * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	ft_strncpy(result, (char *)s1 + start, end + 1 - start);
	result[end + 1 - start] = '\0';
	return ((char *)result);
}

// int main(void)
// {
//     char * s = ft_strtrim("  ", " ");
//     printf("String -> %s",s);
//     return 0;
// }
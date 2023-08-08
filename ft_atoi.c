/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:53:00 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/08 04:00:57 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if ((!sign && (result * 10 + (str[i] - '0')) > 2147483648)
			|| (sign && (result * 10 + (str[i] - '0')) < (-2147483647 - 1)))
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

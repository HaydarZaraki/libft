/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:22:51 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 22:24:33 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*duplicate;
	int		i;

	duplicate = lst;
	i = 0;
	while (duplicate != NULL)
	{
		duplicate = duplicate->next;
		i++;
	}
	return (i);
}

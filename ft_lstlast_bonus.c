/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:12:36 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 22:13:20 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*duplicate;

	if (lst == NULL)
		return (NULL);
	duplicate = lst;
	while (duplicate->next != NULL)
	{
		duplicate = duplicate->next;
	}
	return (duplicate);
}

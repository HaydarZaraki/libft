/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:09:18 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 22:09:24 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
	{
		ft_lstlast(*lst)->next = new;
		while (new->next != NULL)
		{
			new = new->next;
		}
	}
	else
	{
		ft_lstadd_front(lst, new);
		new->next = NULL;
	}
}

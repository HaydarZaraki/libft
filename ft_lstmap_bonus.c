/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:13:40 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/07 04:46:15 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*delete_and_clear(t_list *new_list,
		void (*del)(void *), void *new_content)
{
	del(new_content);
	ft_lstclear(&new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	void	*new_content;
	t_list	*new_node;

	new_list = NULL;
	current = lst;
	if (!lst || !f)
		return (NULL);
	while (current)
	{
		new_content = f(current->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
			delete_and_clear(new_list, del, new_content);
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}

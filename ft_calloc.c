/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helgayli <helgayli@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:57:35 by helgayli          #+#    #+#             */
/*   Updated: 2023/08/06 20:57:36 by helgayli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	if ((nitems > 2147483647 || size > 2147483647) && ((nitems * size) != 0))
		return (0);
	p = (void *)malloc(nitems * size);
	if (!p)
		return (0);
	ft_bzero(p, (nitems * size));
	return (p);
}

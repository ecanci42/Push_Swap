/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:04:05 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:04:06 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	first = 0;
	if (!f || !del || !lst)
		return (0);
	while (lst)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, new);
		lst = lst -> next;
	}
	return (first);
}

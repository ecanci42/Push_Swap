/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:04:10 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:04:11 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*f;

	f = malloc(sizeof(t_list));
	if (!f)
		return (0);
	f->content = content;
	f->next = 0;
	return (f);
}

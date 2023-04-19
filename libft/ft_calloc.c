/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:54:29 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 18:54:32 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(count * size);
	if (tmp)
		ft_bzero(tmp, count * size);
	return (tmp);
}

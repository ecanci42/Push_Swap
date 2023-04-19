/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:04:49 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:04:50 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:05:50 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:05:51 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	d_len = 0;
	if (dst)
		d_len = ft_strlen(dst);
	if (d_len >= size)
		d_len = size;
	else if (d_len < size - 1 && size > 0)
	{
		while (src[i] && d_len + i < size - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[d_len + i] = 0;
	}
	return (d_len + ft_strlen(src));
}

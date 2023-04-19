/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:05:34 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:05:35 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

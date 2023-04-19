/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:06:58 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:06:59 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	str = malloc(len + 1);
	if (!str)
		return (0);
	while (i < len && start < ft_strlen(s) && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:06:52 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:06:53 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

static int	ft_check(char c, char const *set )
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		s;
	int		len;

	i = 0;
	s = 0;
	if (!s1)
		return (0);
	len = ft_strlen(s1);
	while (s < len && ft_check(s1[s], set))
		s++;
	while (len > s && ft_check(s1[len - 1], set))
		len--;
	str = malloc(len - s + 1);
	if (!str)
		return (0);
	while (i < len - s)
	{
		str[i] = s1[s + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

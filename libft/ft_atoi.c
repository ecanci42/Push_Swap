/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:01:11 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:01:12 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	pn;

	i = 0;
	result = 0;
	pn = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			pn *= -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * pn);
}

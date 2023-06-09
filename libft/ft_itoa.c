/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:03:14 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:03:15 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

int	get_len(long n)
{
	int	count;
	int	sign;

	sign = 0;
	count = 1;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	if (!sign)
		return (count);
	return (count + 1);
}

void	ft_result(char *s, long nb, int len)
{
	while (len >= 0)
	{
		s[len] = (nb % 10) + 48;
		nb /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = get_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		ft_result((str + 1), -nb, (len - 2));
	}
	else
		ft_result(str, nb, (len - 1));
	return (str);
}

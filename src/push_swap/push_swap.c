/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:55:17 by ecanci            #+#    #+#             */
/*   Updated: 2023/04/19 18:10:28 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_find_av_size(av);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(av[i], stack.a);
	ft_check_repeat(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

char	*ft_conc_values(char **av)
{
	int		i;
	char	*str;
	char	*temp;

	i = 0;
	str = ft_strdup("");
	while (av[i])
	{
		if (ft_strncmp(av[i], "", 2) == 0)
		{
			ft_printf("Error.\n");
			exit(0);
		}
		temp = ft_strjoin(str, av[i]);
		free(str);
		str = ft_strjoin(temp, " ");
		free(temp);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char	*conc_values;

	if (ac > 1)
	{
		av++;
		conc_values = ft_conc_values(av);
		if (ac == 2)
			av = ft_split(*av, ' ');
		else
			av = ft_split(conc_values, ' ');
		free(conc_values);
		ft_push_swap(av);
	}
	return (0);
}

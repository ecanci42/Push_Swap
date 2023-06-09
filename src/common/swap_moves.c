/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:58:18 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 18:58:19 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_sa(t_stack *stack, int sign)
{
	int	tmp;

	if ((stack->size_a == 0 || stack->size_a == 1))
	{
		return ;
	}
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (sign == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_stack *stack, int sign)
{
	int	tmp;

	if ((stack->size_b == 0 || stack->size_b == 1))
	{
		return ;
	}
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (sign == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_stack *stack, int sign)
{
	if ((stack->size_a == 0 || stack->size_a == 1)
		|| (stack->size_b == 0 || stack->size_b == 1))
	{
		return ;
	}
	ft_sa(stack, sign);
	ft_sb(stack, sign);
	if (sign == 1)
		ft_printf("ss\n");
}

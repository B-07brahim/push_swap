/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:01:36 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:55:59 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	simple_sort_5(int *stack_a, int top_a, int top_b)
{
	int		index;
	int		*stack_b;

	if (is_sorted (stack_a, top_a) == 1)
		return ;
	while (is_sorted(stack_a, top_a) == 0)
	{
		index = elm_index(stack_a, top_a, min_value(stack_a, top_a));
		if (index == -1)
			return ;
		if (index >= (top_a / 2))
			while (index++ < top_a)
				rotate(stack_a, top_a, "ra");
		else
			while (index-- + 1 > 0)
				rev_rotate(stack_a, top_a, "rra");
		if (is_sorted (stack_a, top_a) == 0)
			stack_b = push_pb(&stack_a, &stack_b, &top_a, &top_b);
	}
	while (is_empty(top_b) == 0)
		stack_a = push_pa(&stack_a, &stack_b, &top_a, &top_b);
	if (*stack_b)
		free (stack_b);
	free (stack_a);
}

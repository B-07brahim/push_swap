/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:14:14 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:56:03 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	sort(int *stack_a, int top_a)
{
	int		index;
	int		*stack_b;
	int		top_b;

	top_b = -1;
	if (is_sorted (stack_a, top_a) == 1)
		return ;
	while (is_empty(top_a) == 0)
		push_parts(&stack_a, &stack_b, &top_a, &top_b);
	free (stack_a);
	while (is_empty(top_b) == 0)
	{	
		index = elm_index(stack_b, top_b, max_value(stack_b, top_b));
		if (index == -1)
			return ;
		if (index >= (top_b / 2))
			while (index++ < top_b)
				rotate(stack_b, top_b, "rb");
		else
			while (index-- + 1 > 0)
				rev_rotate (stack_b, top_b, "rrb");
		stack_a = push_pa(&stack_a, &stack_b, &top_a, &top_b);
	}
	free (stack_b);
	free (stack_a);
}

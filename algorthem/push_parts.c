/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_parts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:29:16 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:55:31 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	push_parts(int **stack_a, int **stack_b, int *top_a, int *top_b)
{
	int		elm;
	int		index;
	int		dev;
	char	*check;

	check = "hello";
	while (*top_a >= 0)
	{
		dev = value_part(*stack_a, *top_a);
		while (check != NULL)
		{
			elm = parts(*stack_a, *top_a, dev, &check);
			index = elm_index(*stack_a, *top_a, elm);
			if (index == -1)
				return ;
			if (index >= (*top_a / 2))
				while (index++ < *top_a)
					rotate(*stack_a, *top_a, "ra");
			else
				while (index-- + 1 > 0)
					rev_rotate(*stack_a, *top_a, "rra");
			*stack_b = push_pb(stack_a, stack_b, top_a, top_b);
		}
	}
}

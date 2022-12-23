/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:52:32 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:54:11 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

int	*push_pa(int **stack_a, int **stack_b, int *top_a, int *top_b)
{
	int		i;
	int		*new_stack_a;
	int		b;

	i = *top_a;
	b = *top_a;
	new_stack_a = ft_calloc((*top_a) + 2, sizeof(int));
	if (is_empty(*top_a) == 0)
	{
		while (b + 1)
		{
			new_stack_a[b] = (*stack_a)[i];
			b--;
			i--;
		}
		free(*stack_a);
	}
	(*top_a)++;
	i = *top_a;
	new_stack_a[i] = (*stack_b)[*top_b];
	*stack_b = pop_elm(stack_b, top_b);
	printf("pa\n");
	return (new_stack_a);
}

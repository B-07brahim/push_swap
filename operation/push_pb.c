/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:11:43 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:54:54 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

int	*push_pb(int **stack_a, int **stack_b, int *top_a, int *top_b)
{
	int			i;
	int			*new_stack_b;
	static int	z;

	i = *top_b;
	new_stack_b = ft_calloc((*top_b) + 2, sizeof(int));
	if (is_empty(*top_b) == 0)
	{
		while (i + 1)
		{
			new_stack_b[i] = (*stack_b)[i];
			i--;
		}	
	}
	(*top_b)++;
	i = *top_b;
	new_stack_b[i] = (*stack_a)[*top_a];
	*stack_a = pop_elm(stack_a, top_a);
	if (z != 0)
		free (*stack_b);
	z = 1;
	printf("pb\n");
	return (new_stack_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:07:43 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:19:47 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	simple_sort_2(int stack_a[], int top_a)
{
	if (top_a == 1)
	{
		if (stack_a[0] < stack_a[1])
			swap(stack_a, top_a, "sa");
	}
}

void	simple_sort_3(int stack_a[], int top_a)
{
	if (top_a == 0)
		return ;
	if (top_a == 1)
		simple_sort_2(stack_a, top_a);
	else if (stack_a[1] < stack_a[0] && stack_a[0] < stack_a[2]
		&& stack_a[1] < stack_a[2])
		rotate(stack_a, top_a, "ra");
	else if (stack_a[1] < stack_a[0] && stack_a[0] > stack_a[2]
		&& stack_a[1] < stack_a[2])
		swap(stack_a, top_a, "sa");
	else if (stack_a[1] > stack_a[0] && stack_a[0] > stack_a[2]
		&& stack_a[1] > stack_a[2])
	{
		swap(stack_a, top_a, "sa");
		rotate(stack_a, top_a, "ra");
	}
	else if (stack_a[1] > stack_a[0] && stack_a[0] < stack_a[2]
		&& stack_a[1] > stack_a[2])
		rev_rotate(stack_a, top_a, "rra");
	else if (stack_a[2] > stack_a[0])
	{
		swap(stack_a, top_a, "sa");
		rev_rotate(stack_a, top_a, "rra");
	}
}

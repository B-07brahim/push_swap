/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:04:37 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:15:52 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		size;
	char	**data;
	int		*stack_a;
	int		top_a;
	int		i;

	i = 0;
	error_part2(argv, argc);
	size = join_argv(&data, argv + 1, " ");
	error_part1(data);
	top_a = size - 1;
	stack_a = ft_calloc(size, sizeof(int));
	while (size-- > 0)
		stack_a[i++] = ft_atoi(data[size]);
	error_part3(stack_a, top_a);
	if (top_a + 1 <= 3)
		simple_sort_3(stack_a, top_a);
	else if (top_a + 1 == 5)
		simple_sort_5(stack_a, top_a, -1);
	else
		sort(stack_a, top_a);
	i = 0;
	while (data[i])
		free (data[i++]);
	free (data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_part3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:15:48 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:00:14 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	error_part3(int *stack_a, int top)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = stack_a[top];
	while (top > 0)
	{
		if (stack_a[i] == tmp)
		{
			printf("Error\n");
			exit(0);
		}
		while (stack_a[i] != tmp && i < top)
			i++;
		tmp = stack_a[top - 1];
		top--;
		i = 0;
	}
}

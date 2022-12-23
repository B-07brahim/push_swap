/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:33:17 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:00:47 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	min_value(int stack[], int top)
{
	int		tmp;
	int		i;

	i = stack[top];
	tmp = stack[top];
	while (*stack && top > 0)
	{
		if (tmp > stack[top - 1])
		{
			tmp = stack[top - 1];
			i = stack[top - 1];
		}
		top--;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_part.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:49:02 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:20:53 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

int	value_part(int *stack, int top)
{
	int		tmp;
	int		count;
	int		i;

	i = 0;
	count = 0;
	tmp = min_value(stack, top);
	while (top >= 0)
	{
		while (stack[i] != tmp && i <= top)
			i++;
		if (stack[i] == tmp)
			count++;
		if (count >= top / 3.24)
		{
			return (stack[i]);
		}
		if (tmp == max_value(stack, top))
			return (stack[i]);
		i = 0;
		tmp++;
	}
	return (-1);
}

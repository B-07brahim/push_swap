/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:01:08 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:00:51 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	*pop_elm(int **stack, int *top)
{
	int			i;
	static int	z;
	int			*new_stack;

	i = 0;
	new_stack = ft_calloc(*top, sizeof(int));
	while (*top > i)
	{
		new_stack[i] = (*stack)[i];
		i++;
	}
	(*top)--;
	if (z)
		free (*stack);
	z = 1;
	return (new_stack);
}

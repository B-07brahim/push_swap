/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:02:28 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 17:01:12 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

int	parts(int *stack, int top, int dev, char **check)
{
	int		above;
	int		below;
	int		i;
	int		j;

	above = stack[top];
	below = stack[0];
	i = 0;
	j = top;
	while (i++ <= j--)
	{	
		if (above <= dev)
			return (above);
		else if (below <= dev)
			return (below);
		above = stack[j];
		below = stack[i];
	}
	check = NULL;
	return (-1);
}

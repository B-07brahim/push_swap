/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:21:49 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:01:00 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	is_sorted(int stack[], int top)
{
	int		i;

	i = top;
	while (i)
	{
		if (stack[i] > stack[i - 1])
			return (0);
		i--;
	}
	return (1);
}

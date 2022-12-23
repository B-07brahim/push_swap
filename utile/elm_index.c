/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elm_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:43:18 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:59:48 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	elm_index(int *stack, int top, int elm)
{
	while (*stack && top >= 0)
	{
		if (stack[top] == elm)
			return (top);
		top--;
	}
	return (-1);
}

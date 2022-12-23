/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:34:44 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:19:53 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void	rotate(int stack[], int top, char *opr)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack[top];
	while (top > i)
	{
		stack[top - i] = stack[top - (i + 1)];
		i++;
	}
	stack[0] = tmp;
	printf("%s\n", opr);
}

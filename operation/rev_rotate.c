/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:33:52 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:20:19 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void	rev_rotate(int stack[], int top, char *opr)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = stack[0];
	while (top > i)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[top] = tmp;
	printf("%s\n", opr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:37:34 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:16:38 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void	swap(int stack[], int top, char *opr)
{
	int		tmp;

	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
	printf("%s\n", opr);
}

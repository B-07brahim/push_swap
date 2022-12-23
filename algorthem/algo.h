/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:08:27 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:55:39 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "../Libft/libft.h"
# include "../utile/utils.h"
# include "../operation/operation.h"

void	simple_sort_3(int stack_a[], int top_a);
void	simple_sort_5(int *stack_a, int top_a, int top_b);
void	sort(int *stack_a, int top_a);
void	push_parts(int **stack_a, int **stack_b, int *top_a, int *top_b);
int		value_part(int *stack, int top);
int		parts(int *stack, int top, int dev, char **check);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:38:12 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:54:19 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "../Libft/libft.h"
# include <stdio.h>
# include "../utile/utils.h"

void	rotate(int stack[], int top, char *opr);
void	rev_rotate(int stack[], int top, char *opr);
void	swap(int stack[], int top, char *opr);
int		*push_pa(int **stack_a, int **stack_b, int *top_a, int *top_b);
int		*push_pb(int **stack_a, int **stack_b, int *top_a, int *top_b);
#endif
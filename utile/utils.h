/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:39:25 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:51:11 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "../Libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

int		join_argv(char ***data, char **argv, char *sep);
int		is_sorted(int stack[], int top);
int		is_empty(int top);
int		min_value(int stack[], int top);
int		max_value(int stack[], int top);
int		elm_index(int *stack, int top, int elm);
int		*pop_elm(int **stack, int *top);
void	error_part1(char **data);
void	error_part2(char **data, int argc);
void	error_part3(int *stack_a, int top);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_part2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:56:24 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:00:06 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	error_part2(char **data, int argc)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (data[i][j] == '\0')
		{
			printf("Error\n");
			exit(0);
		}
		i++;
	}
}

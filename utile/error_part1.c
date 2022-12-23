/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_part1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:59:57 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 22:59:36 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	max(char *data)
{
	char	*comper;
	int		i;

	i = 0;
	if (data[i] == '-')
		comper = "-2147483648";
	if (data[i] == '+')
		comper = "+2147483647";
	if (data[i] >= 48 && data[i] <= 57)
		comper = "2147483647";
	while (data[i])
	{
		if (data[i] > comper[i])
		{
			printf("Error3\n");
			exit(0);
		}
		i++;
	}
}

static int	valid(char *data)
{
	int		i;

	i = 0;
	if (data[i] == 45 || data[i] == 43)
			i++;
	while (data[i] == 48)
			i++;
	if (data[i] == 45 || data[i] == 43)
	{
		printf("Error2\n");
		exit (0);
	}
	return (i);
}

void	error_part1(char **data)
{
	int		j;
	int		i;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	while (data[j])
	{
		i = valid (data[j]);
		while (data[j][i] && x <= 9)
		{
			if (!(data[j][i] >= 48 && data[j][i] <= 57))
			{
				printf("Error1\n");
				exit (0);
			}
			i++;
			x++;
		}
		if (x >= 10)
			max(data[j]);
		j++;
		x = 0;
	}
}	

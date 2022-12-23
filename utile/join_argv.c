/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:20:03 by bchifour          #+#    #+#             */
/*   Updated: 2022/12/23 23:00:23 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	join_argv(char ***data, char **argv, char *sep)
{
	char		*str;
	char		*tmp;
	int			i;

	i = 0;
	while (*argv)
	{
		if (!str)
			str = ft_strdup(*argv++);
		else
		{
			tmp = str;
			str = ft_strjoin(str, sep);
			tmp = str;
			str = ft_strjoin(str, *argv++);
		}
	}
	*data = ft_split(str, *sep);
	free (str);
	while ((*data)[i])
		i++;
	return (i);
}

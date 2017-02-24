/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:17:13 by rchiorea          #+#    #+#             */
/*   Updated: 2017/01/05 16:25:46 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

int		count_tetriminos(char *str)
{
	int		i;
	int		nl;

	nl = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			nl++;
		i++;
	}
	return ((nl + 1) / 5);
}

int		count_nr(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	convert_hash(char **tetris, int i, int j)
{
	char	c;

	c = 'A';
	while (tetris[j] != '\0')
	{
		while (tetris[j][i] != '\0')
		{
			if (tetris[j][i] == '#')
				tetris[j][i] = c;
			i++;
		}
		i = 0;
		c++;
		j++;
	}
	if (c > 'Z' + 1)
		error();
}

int		how_many_dots(char *str)
{
	int i;

	i = 0;
	while (str[i] == '.')
		i++;
	return (i);
}

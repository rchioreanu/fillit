/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:50:59 by rchiorea          #+#    #+#             */
/*   Updated: 2017/01/05 16:56:03 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int len)
{
	int i;

	i = 2;
	while (i * i < len)
		i++;
	return (i);
}

char	**get_in_matrix(char *array, int count, int i, int j)
{
	char	**matrix;

	if (!(matrix = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	matrix[count] = NULL;
	while (i < count)
	{
		if (!(matrix[i++] = (char*)malloc(sizeof(char) * 16 + 1)))
			return (NULL);
		matrix[i - 1][16] = '\0';
	}
	count = 0;
	i = 0;
	while (array[i] != '\0')
	{
		if (array[i] != '\n')
			matrix[j][count++] = array[i];
		if (((i + 1) % 21) == 0)
		{
			count = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}

char	**fix_tetris(char **square, char *str, int i, int j)
{
	int		k;
	int		dots;

	dots = how_many_dots(str);
	k = dots - 1;
	while (str[++k])
	{
		if (str[k] != '.')
			square[j + (k / 4) - (dots / 4)][i + (k % 4) - (dots % 4)] = str[k];
	}
	return (square);
}

char	**get_out(char **square, char *str, int i, int j)
{
	char	chr;

	chr = str[how_many_dots(str)];
	while (square[j])
	{
		while (square[j][i])
		{
			if (square[j][i] == chr)
				square[j][i] = '.';
			i++;
		}
		i = 0;
		j++;
	}
	return (square);
}

char	**new_square(int size)
{
	char	**square;
	int		i;
	int		j;

	i = 0;
	if (!(square = malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	square[size] = NULL;
	while (i < size)
	{
		if (!(square[i] = malloc(sizeof(char) * (size + 1))))
			return (NULL);
		square[i][size] = '\0';
		i++;
	}
	i = 0;
	while (square[i])
	{
		j = 0;
		while (j < size)
			square[i][j++] = '.';
		i++;
	}
	return (square);
}

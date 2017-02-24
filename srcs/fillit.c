/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:05:47 by rchiorea          #+#    #+#             */
/*   Updated: 2017/01/05 17:06:40 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(char **matrix, int nb)
{
	char	**map;
	int		size;

	size = ft_sqrt(nb * 4);
	map = new_square(size);
	while (resolve(matrix, map, 0) == 0)
	{
		size++;
		free_square(map);
		map = new_square(size);
	}
	aff_matrix(map);
}

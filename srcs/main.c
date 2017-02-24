/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:36:15 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/05 17:04:57 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_square(char **square)
{
	int i;
	int j;

	j = 0;
	i = count_nr(square);
	while (j < i)
	{
		free(square[j]);
		j++;
	}
	free(square);
}

int		resolve(char **tetris, char **map, int i)
{
	int		x;
	int		y;
	char	*str;

	if (!tetris[i])
		return (1);
	y = -1;
	str = tetris[i];
	while (++y < count_nr(map))
	{
		x = 0;
		while (x < count_nr(map))
		{
			if (check_map(map, str, x, y) == 0)
			{
				map = fix_tetris(map, str, x, y);
				if (resolve(tetris, map, i + 1) == 1)
					return (1);
				else
					get_out(map, str, 0, 0);
			}
			x++;
		}
	}
	return (0);
}

void	aff_matrix(char **matrix)
{
	int i;

	i = 0;
	while (matrix[i])
	{
		ft_putendl(matrix[i]);
		i++;
	}
}

void	function_to_call(char **tetris, int count, char *buf, int fd)
{
	tetris = get_in_matrix(buf, count, 0, 0);
	free(buf);
	validate(tetris, -1, -1, 0);
	convert_hash(tetris, 0, 0);
	fillit(tetris, count);
	close(fd);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		count;
	int		bytes;
	char	**tetris;
	char	*buf;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		exit(0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error();
	tetris = NULL;
	buf = (char*)malloc(BUFF_SIZE + 1);
	bytes = read(fd, buf, BUFF_SIZE + 1);
	if (bytes == -1)
		error();
	buf[bytes] = '\0';
	count = count_tetriminos(buf);
	if (ft_verificare(buf, 0, 0, 0) == 0 || ft_check_pieces(buf) == 0)
		error();
	function_to_call(tetris, count, buf, fd);
	return (0);
}

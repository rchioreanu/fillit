/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 09:40:18 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/05 17:07:10 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# define BUFF_SIZE 546

void	error(void);
int		count_tetriminos(char *str);
int		ft_verificare(char *s, int i, int hash, int dot);
int		ft_check_pieces(char *str);
int		resolve(char **tetris, char **map, int i);
char	**fix_tetris(char **square, char *str, int i, int j);
char	**get_out(char **square, char *str, int i, int j);
char	**new_square(int size);
void	fillit(char **matrix, int nb);
int		ft_j(int i, int j);
int		ft_count(int i, int count);
char	**get_in_matrix(char *array, int count, int i, int j);
void	convert_hash(char **tetris, int i, int j);
char	**ft_validate(int fd, char **tetris);
int		count_nr(char **str);
int		ft_sqrt(int len);
int		how_many_dots(char *str);
void	free_square(char **square);
void	aff_matrix(char **matrix);
int		validate_tetris(char **tetris, int i, int j);
void	validate(char **tetris, int i, int j, int hash);
int		check_map(char **square, char *str, int i, int j);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:46:46 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 12:08:19 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct so_long
{
	void	*mlx;
	void	*mlx_wid;
	char	**parc;
	void	*wall;
	void	*floor;
	void	*exit;
	void	*player;
	void	*collect;
	int		i;
	int		j;
	int		y;
	int		x;
	int		l;
	int		w;
	int		m;
	int		k;
	int		n;
	int		move;

}t_so_long;

typedef struct so_long_tester
{
	int	i;
	int	k;
	int	n;
	int	j;
	int	m;
	int	l;
	int	q;
	int	w;
	int	t;
	int	c;
	int	pl;
}t_map;

int		calcule_long(char **p);
int		calcule_larg(char **p);
char	**ft_split(char const *s, char c);
int		check_v1(char *av);
void	check_fd(int fd);
void	check_ac(int ac);
char	**ft_parcing(int fd, char *tr);
void	ft_move_up_right(t_so_long *variable, int keycode);
void	ft_move_down_left(t_so_long *varable, int keycode);
void	ft_convert_image(t_so_long *image);
void	ft_find_p(t_so_long *player);
void	ft_rander(t_so_long *variable);
int		walltest(char **p, t_map *test);
void	initialisation(t_map *test);
int		check_lines(char **p, t_map *test);
int		testeur_map(char **p, t_map *test);
void	ft_rander2(t_so_long *variable);
int		key_hook(int keycode, t_so_long *variabls);
int		ft_exit(void);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
int		ft_strlen(char *str);
void	ft_open_wind(t_so_long variabls, t_map map);
int		test_newline(char *tr);

#endif
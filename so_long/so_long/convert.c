/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:27 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:28 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_convert_image(t_so_long *image)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	image->wall = mlx_xpm_file_to_image(image->mlx, "wall.xpm", &i, &j);
	image->floor = mlx_xpm_file_to_image(image->mlx, "bag.xpm", &i, &j);
	image->player = mlx_xpm_file_to_image(image->mlx, "player.xpm", &i, &j);
	image->exit = mlx_xpm_file_to_image(image->mlx, "exit.xpm", &i, &j);
	image->collect = mlx_xpm_file_to_image(image->mlx, "collect.xpm", &i, &j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:51 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:52 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_so_long *variabls)
{
	ft_find_p(variabls);
	ft_move_up_right(variabls, keycode);
	ft_move_down_left(variabls, keycode);
	if (keycode == 53)
	{
		mlx_destroy_window(variabls->mlx, variabls->mlx_wid);
		exit (0);
	}
	ft_putnbr(variabls->move);
	ft_putstr("\n");
	mlx_clear_window(variabls->mlx, variabls->mlx_wid);
	ft_rander(variabls);
	return (0);
}

int	ft_exit(void)
{
	exit (0);
}

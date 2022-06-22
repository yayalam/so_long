/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:54 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:55 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_open_wind(t_so_long variabls, t_map map)
{
	variabls.l = calcule_long(variabls.parc);
	variabls.w = calcule_larg(variabls.parc);
	variabls.mlx = mlx_init();
	variabls.mlx_wid = mlx_new_window(variabls.mlx, (variabls.l * 50),
			(variabls.w * 50), "so_long");
	ft_convert_image(&variabls);
	ft_rander(&variabls);
	variabls.k = map.c;
	mlx_hook(variabls.mlx_wid, 2, 0, key_hook, &variabls);
	mlx_hook(variabls.mlx_wid, 17, 0, ft_exit, &variabls);
	mlx_loop(variabls.mlx);
}

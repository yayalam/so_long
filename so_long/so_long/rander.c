/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rander.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:57 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:58 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_rander2(t_so_long *variable)
{
	if (variable->parc[variable->j][variable->i] == 'E')
		mlx_put_image_to_window(variable->mlx, variable->mlx_wid,
			variable->exit, variable->x, variable->y);
	if (variable->parc[variable->j][variable->i] == 'C')
		mlx_put_image_to_window(variable->mlx, variable->mlx_wid,
			variable->collect, variable->x, variable->y);
	if (variable->parc[variable->j][variable->i] == 'P')
		mlx_put_image_to_window(variable->mlx, variable->mlx_wid,
			variable->player, variable->x, variable->y);
}

void	ft_rander(t_so_long *variable)
{
	variable->x = 0;
	variable->j = 0;
	variable->y = 0;
	while (variable->j < variable->w)
	{
		variable->i = 0;
		while (variable->i < variable->l)
		{
			if (variable->parc[variable->j][variable->i] == '1')
				mlx_put_image_to_window(variable->mlx, variable->mlx_wid,
					variable->wall, variable->x, variable->y);
			if (variable->parc[variable->j][variable->i] == '0')
				mlx_put_image_to_window(variable->mlx, variable->mlx_wid,
					variable->floor, variable->x, variable->y);
			ft_rander2(variable);
			variable->x += 50;
			variable->i++;
		}
		variable->x = 0;
		variable->y += 50;
		variable->j++;
	}
}

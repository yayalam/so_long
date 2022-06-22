/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_a_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:43 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:45:44 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_s(t_so_long *variable, int keycode)
{
	if (keycode == 1)
	{
		if (variable->parc[variable->i + 1][variable->j] == '0' )
		{
			variable->parc[variable->i + 1][variable->j] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->move += 1;
		}
		else if (variable->parc[variable->i + 1][variable->j] == 'C')
		{
			variable->parc[variable->i + 1][variable->j] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->k--;
			variable->move += 1;
		}
		else if (variable->parc[variable->i + 1][variable->j] == 'E'
			&& variable-> k == 0)
		{
			mlx_destroy_window(variable->mlx, variable->mlx_wid);
			exit (0);
		}
	}
}

void	ft_move_a(t_so_long *variable, int keycode)
{
	if (keycode == 0)
	{
		if (variable->parc[variable->i][variable->j - 1] == '0')
		{
			variable->parc[variable->i][variable->j - 1] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->move += 1;
		}
		else if (variable->parc[variable->i][variable->j - 1] == 'C')
		{
			variable->parc[variable->i][variable->j - 1] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->k--;
			variable->move += 1;
		}
		else if (variable->parc[variable->i][variable->j - 1] == 'E'
			&& variable-> k == 0)
		{
			mlx_destroy_window(variable->mlx, variable->mlx_wid);
			exit (0);
		}
	}
}

void	ft_move_down_left(t_so_long *variable, int keycode)
{
	ft_move_a(variable, keycode);
	ft_move_s(variable, keycode);
}

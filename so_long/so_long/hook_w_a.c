/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_w_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:47 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:46:35 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_d(t_so_long *variabls, int keycode)
{
	if (keycode == 2)
	{
		if (variabls->parc[variabls->i][variabls->j + 1] == '0')
		{
			variabls->parc[variabls->i][variabls->j + 1] = 'P';
			variabls->parc[variabls->i][variabls->j] = '0';
			variabls->move += 1;
		}
		else if (variabls->parc[variabls->i][variabls->j + 1] == 'C')
		{
			variabls->parc[variabls->i][variabls->j + 1] = 'P';
			variabls->parc[variabls->i][variabls->j] = '0';
			variabls->k--;
			variabls->move += 1;
		}
		else if (variabls->parc[variabls->i][variabls->j + 1] == 'E'
			&& variabls-> k == 0)
		{
			mlx_destroy_window(variabls->mlx, variabls->mlx_wid);
			exit (0);
		}
	}
}

void	ft_move_w(t_so_long *variable, int keycode)
{
	if (keycode == 13)
	{
		if (variable->parc[variable->i - 1][variable->j] == '0')
		{
			variable->parc[variable->i - 1][variable->j] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->move += 1;
		}
		else if (variable->parc[variable->i - 1][variable->j] == 'C')
		{
			variable->parc[variable->i - 1][variable->j] = 'P';
			variable->parc[variable->i][variable->j] = '0';
			variable->k--;
			variable->move += 1;
		}
		else if (variable->parc[variable->i - 1][variable->j] == 'E'
			&& variable->k == 0)
		{
			mlx_destroy_window(variable->mlx, variable->mlx_wid);
			exit (0);
		}
	}
}

void	ft_move_up_right(t_so_long *variable, int keycode)
{
	ft_move_d(variable, keycode);
	ft_move_w(variable, keycode);
}

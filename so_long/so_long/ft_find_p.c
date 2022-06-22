/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:30 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:31 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_find_p(t_so_long *player)
{
	player->i = 0;
	player->j = 0;
	while (player->parc[player->i])
	{
		player->j = 0;
		while (player->parc[player->i][player->j])
		{
			if (player->parc[player->i][player->j] == 'P')
			{
				return ;
			}
			player->j++;
		}
		player->i++;
	}
}

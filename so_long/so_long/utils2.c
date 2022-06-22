/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:44:07 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:44:08 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	calcule_long(char **p)
{
	int	i;

	i = 0;
	while (p[0][i])
	{
		i++;
	}
	return (i);
}

int	calcule_larg(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		i++;
	}
	return (i);
}

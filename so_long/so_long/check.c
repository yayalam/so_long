/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:23 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 12:41:56 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_ac(int ac)
{
	if (ac != 2)
	{
		ft_putstr("Error\nparram\n");
		exit(0);
	}
}

void	check_fd(int fd)
{
	if (fd == -1)
	{
		ft_putstr("Error\nfd\n");
		exit(0);
	}
}

int	check_v1(char *av)
{
	int	i;

	i = ft_strlen(av);
	if (i < 5)
		return (0);
	if (av[i - 1] != 'r' || av[i - 2] != 'e'
		|| av[i - 3] != 'b' || av[i - 4] != '.')
		return (0);
	return (1);
}

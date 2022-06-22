/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:59 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 12:41:27 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char**av)
{
	int			fd;
	char		tr[9999];
	t_so_long	variabls;
	t_map		map;

	fd = open(av[1], O_RDONLY);
	check_ac(ac);
	if (check_v1(av[1]) == 0)
	{
		ft_putstr("Error\n.ber\n");
		exit(0);
	}
	check_fd(fd);
	variabls.parc = ft_parcing(fd, tr);
	if (ft_strlen(tr) == 0 || tr[0] != '1')
	{
		ft_putstr("Error\nIN MAPS\n");
		return (0);
	}
	if (testeur_map(variabls.parc, &map) == 0 || test_newline(tr) == 0)
	{
		ft_putstr("Error\nIN MAPS\n");
		return (0);
	}
	ft_open_wind(variabls, map);
}

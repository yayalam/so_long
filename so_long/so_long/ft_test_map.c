/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:37 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 12:38:11 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	c_check(char **p, int n, int m, t_map *cl)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	cl->c = 0;
	while (p[i] && i < n)
	{
		j = 0;
		while (j < m)
		{
			if (p[i][j] == 'C')
			{
				cl->c++;
			}
			j++;
		}
		i++;
	}
}

void	pl_check(char **p, int n, int m, t_map *pl)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	pl->pl = 0;
	while (p[i] && i < n)
	{
		j = 0;
		while (j < m)
		{
			if (p[i][j] == 'P')
			{
				pl->pl++;
			}
			j++;
		}
		i++;
	}
}

int	allcaracter_check(char **p, int n, int m, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p[i] && i < n)
	{
		j = 0;
		while (j < m)
		{
			if (p[i][j] == c)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_othercarecter(char **p, t_map *test)
{
	while (p[test->q] && test->q < test->n)
	{
		test->w = 0;
		while (test->w < test->m)
		{
			if (p[test->q][test->w] != '0' && p[test->q][test->w] != '1'
					&& p[test->q][test->w] != 'P'
					&& p[test->q][test->w] != 'C' && p[test->q][test->w] != 'E')
			{
				return (0);
			}
			test->w++;
		}
		test->q++;
	}
	return (1);
}

int	testeur_map(char **p, t_map *test)
{
	int	y;

	y = 0;
	initialisation(test);
	if (check_lines (p, test) == 0)
		return (0);
	test->n = 0;
	if (walltest(p, test) == 0)
		return (0);
	if (check_othercarecter (p, test) == 0)
		return (0);
	c_check(p, test->n, test->m, test);
	pl_check(p, test->n, test->m, test);
	if (test->pl >= 2)
		return (0);
	y += allcaracter_check(p, test->n, test->m, 'C');
	y += allcaracter_check(p, test->n, test->m, 'P');
	y += allcaracter_check(p, test->n, test->m, 'E');
	if (y < 3)
		return (0);
	return (1);
}

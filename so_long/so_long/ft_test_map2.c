/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_map2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:03 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 12:39:25 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialisation(t_map *test)
{
	test->i = 0;
	test->j = 0;
	test->j = 0;
	test->k = 0;
	test->l = 0;
	test->m = 0;
	test->n = 0;
	test->q = 0;
	test->q = 0;
	test->t = 0;
}

int	walltest(char **p, t_map *test)
{
	while (p[test->n] && p[test->n][0] == '1')
	{
		test->n++;
	}
	while (p[test->k] && p[test->k][test->j - 1] == '1')
	{
		test->k++;
	}
	if (test->n != test->k)
	{
		return (0);
	}
	while (test->l != test->k)
	{
		while (p[test->l][test->m])
		{
			test->m++;
		}
		test->l++;
	}
	if (test->m != test->i && test->m != test->j)
	{
		return (0);
	}
	return (1);
}

int	check_lines(char **p, t_map *test)
{
	while (p[test->n])
	{
		test->n++;
	}
	while (p[0][test->i] == '1')
	{
		test->i++;
	}
	while (p[test->n - 1][test->j] == '1')
	{
		test->j++;
	}
	if (test->i != test->j)
	{
		return (0);
	}
	return (1);
}

int	test_newline(char *tr)
{
	int	i;

	i = 0;
	if (!tr)
		return (0);
	if (tr[0] == '\n')
	{
		return (0);
	}
	while (tr[i])
	{
		if (tr[i] == '\n' && tr[i + 1] == '\n')
			return (0);
		i++;
	}
	if (tr[ft_strlen(tr) - 1] == '\n')
	{
		return (0);
	}
	return (1);
}

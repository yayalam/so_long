/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:44:09 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:44:10 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s++);
	}
}

void	ft_putnbr(int n)
{
	long	n1;

	n1 = n;
	if (n1 >= 0 && n1 <= 9)
	{
		ft_putchar(n1 + 48);
	}
	if (n1 >= 10)
	{
		ft_putnbr(n1 / 10);
		ft_putchar(n1 % 10 + 48);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

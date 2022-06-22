/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:43:33 by ylambark          #+#    #+#             */
/*   Updated: 2022/06/22 09:43:34 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_parcing(int fd, char *tr)
{
	int		i;
	int		b;
	char	str;
	char	**k;

	b = 1;
	i = 0;
	while (b != 0)
	{
		b = read(fd, &str, 1);
		if (b != 0)
			tr[i++] = str;
		tr[i] = '\0';
	}
	close(fd);
	k = ft_split(tr, '\n');
	return (k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:14:39 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/24 16:02:51 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tmp;

	i = -1;
	tmp = (int *)malloc(sizeof(int) * length + 1);
	while (++i < length)
		tmp[i] = f(tab[i]);
	return (tmp);
}

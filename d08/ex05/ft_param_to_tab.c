/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:54:16 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/23 11:44:52 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char						*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*result;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	if (!(result = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int							ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par			*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*stock;

	stock = NULL;
	i = 0;
	if (!(stock = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		stock[i].str = av[i];
		i++;
	}
	stock[i].str = 0;
	return (stock);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:55:11 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/18 15:32:55 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			size++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		x;
	int		size;
	char	*av;

	i = 0;
	x = 0;
	size = ft_size(argc, argv);
	if (!(av = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			av[x++] = argv[i][j];
		if (i < argc - 1)
			av[x++] = '\n';
	}
	av[x] = '\0';
	return (av);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:22:34 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/19 18:40:22 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_word(char *str, int d)
{
	int		i;

	i = 0;
	while (str[d] != ' ' && str[d] != '\n' && str[d] != '\t' && str[d] != '\0')
	{
		d++;
		i++;
	}
	return (i);
}

int		nb_word(char *str)
{
	int		i;
	int		nb_w;

	nb_w = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
		{
			nb_w++;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				i++;
		}
		else
			i++;
	}
	return (nb_w);
}

void	ft_strcopy_bis(char **tab, int j, int i, char *str)
{
	int		k;

	k = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
		tab[j][k++] = str[i++];
	tab[j++][k] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		nb_w;
	char	**tab;

	i = 0;
	j = 0;
	nb_w = nb_word(str);
	if (!(tab = (char **)malloc(sizeof(char *) * nb_w + 1)))
		return (NULL);
	while (nb_w--)
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		{
			if (!(tab[j] = (char *)malloc(sizeof(char) * in_word(str, i) + 1)))
				return (NULL);
			ft_strcopy_bis(tab, j, i, str);
			i += in_word(str, i);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

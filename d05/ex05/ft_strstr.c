/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:11:27 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/09 17:23:28 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = -1;
	if (!to_find)
		return (0);
	while (str[++i])
	{
		j = 0;
		if (str[i + j] == to_find[j])
			while (str[i + j] == to_find[j])
				j++;
		if (!to_find[j])
			return (str + i);
	}
	return (0);
}

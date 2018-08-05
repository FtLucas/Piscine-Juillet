/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 18:29:44 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/25 19:08:15 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (!(*tab == 0))
	{
		if (f(*(tab++)))
			count++;
	}
	return (0);
}

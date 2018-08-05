/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:08:10 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/12 15:26:16 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrtend(int i, int nb)
{
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		ft_sqrtmid(int i, int nb)
{
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		ft_sqrtearly(int i, int nb)
{
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 1000000000)
		i = ft_sqrtearly(i, nb);
	if (nb > 1000000000 && nb < 2000000000)
	{
		i = 31622;
		i = ft_sqrtmid(i, nb);
	}
	if (nb >= 2000000000)
	{
		i = 44721;
		i = ft_sqrtend(i, nb);
	}
	return (i);
}

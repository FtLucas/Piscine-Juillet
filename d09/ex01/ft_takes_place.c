/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:55:08 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/13 14:15:02 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int		am;
	int		pm;
	int		i;

	i = 0;
	if (hour < 0)
		return ;
	if (hour > 24)
		return ;
	if (hour >= 0 && hour <= 11)
	{
		while (i <= hour)
			am++;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND", am);
	}
	am = 0;
	if (hour > 12 && hour < 24)
	{
		while (i <= hour)
			pm++;
		printf(" %d.00 A.M.\n", pm);
	}
	printf("\n");
}

int		main(void)
{
	ft_takes_place(10);
	return (0);
}

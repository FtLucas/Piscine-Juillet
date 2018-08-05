/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:17:41 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/11 19:09:42 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i++ < ac)
	{
		ft_putstr(av[j++]);
		ft_putchar('\n');
	}
	return (0);
}

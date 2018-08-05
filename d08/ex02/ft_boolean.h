/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:08:59 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/23 16:48:29 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(x) (x % 2)
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an odd number of arguments.\n"
# define ODD_MSG "I have an even number of arguments.\n"
# define SUCCESS 0

void			ft_putstr(char *str);
typedef	int		t_bool;
t_bool			ft_is_even(int nbr);
#endif

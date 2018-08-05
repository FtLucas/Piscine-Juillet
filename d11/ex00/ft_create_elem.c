/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 17:56:37 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/25 21:39:01 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	if (!(ist = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

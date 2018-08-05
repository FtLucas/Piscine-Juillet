/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:49:37 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/26 13:53:26 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;
	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}

void		ft_print(t_list *head)
{
	t_list	*maillon;

	maillon = head;
	while (head)
	{
		//printf("%d\n", *(int*)head->next);
		head = head->next;
	}
}

int		main(void)
{
	t_list	*head;
	int		nb;
	int		nb1;
	int		nb2;

	nb = 5;
	nb1 = 15;
	head = ft_create_elem(&nb);
	ft_list_push_front(&head, &nb1);
	ft_print(head);
	return (0);
}

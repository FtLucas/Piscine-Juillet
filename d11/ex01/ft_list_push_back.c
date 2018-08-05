/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:58:39 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/26 10:47:04 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;
	
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

void 	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (head)
	{
		printf("%d\n", *(int *)head->data);
		head = head->next;
	}
}

int		main(void)
{
	t_list	*head;
	int		n;
	int		lol;
	int		mdr;

	n = 5;
	lol = 10;
	mdr = 15;
	head = ft_create_elem(&n);
	ft_list_push_back(&head, &lol);
	ft_list_push_back(&head, &mdr);
	print_list(head);

	return (0);
}

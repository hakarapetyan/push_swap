/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:09:16 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/13 14:31:21 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

void	ft_list_add_back(t_list **a, t_list *new)
{
	t_list	*last;

	if (!(*a))
	{
		*a = new;
		return ;
	}
	if (*a)
	{
		last = ft_lstlast(*a);
		new -> prev = last;
		last -> next = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head -> next = NULL;
	head -> prev = NULL;
	head -> value = content;
	return (head);
}

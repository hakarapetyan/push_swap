/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:33:18 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:31:57 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a)
{
	t_list	*tmp;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp = *a;
	*a = (*a)-> next;
	tmp -> next = (*a)-> next;
	(*a)-> next = tmp;
}

void	sa(t_list **a)
{
	swap(a);
	ft_putstr("sa\n");
}

void	sb(t_list **b)
{
	swap(b);
	ft_putstr("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putstr("ss\n");
}

// int main(){

// 	t_stack_node *a;
// 	t_stack_node *b = NULL;
// 	a= malloc(sizeof(t_stack_node));
// 	a->next = malloc(sizeof(t_stack_node));
// 	a->next->next = malloc(sizeof(t_stack_node));
// 	a->value = 42;
// 	a ->next -> value =1337;
// 	a ->next ->next-> value=-21;
// 	a->prev = NULL;
// 	a->next->prev = a;
// 	a ->next ->next->prev = a->next;
// 	a ->next ->next->next = NULL;
// 	swap(&a);
// }
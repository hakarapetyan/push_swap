/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:32:08 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:27:32 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	if (!(*a))
	{
		*a = *b;
		*b = (*b)-> next;
		(*a)-> next = NULL;
	}
	else
	{
		tmp = *b;
		(*b) = (*b)-> next;
		tmp -> next = *a;
		*a = tmp;
	}
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	ft_putstr("pb\n");
}

// int main()
// {
// 	t_list* nodes_1 = malloc(sizeof(t_list));
// 	// t_list* nodes_2 = malloc(sizeof(t_list));
// 	// t_list* nodes_3 = malloc(sizeof(t_list));
// 	// t_list* nodes_4 = malloc(sizeof(t_list));

// 	nodes_1->value = 8;
// 	// nodes_2->value = 2;
// 	// nodes_3->value = 3;
// 	// nodes_4->value = 4;
// 	nodes_1->next = NULL;
// 	nodes_1->prev = NULL;

// 	// nodes_2->next = nodes_3;
// 	// nodes_2->prev = nodes_1;

// 	// nodes_3->next = nodes_4;
// 	// nodes_3->prev = nodes_2;

// 	// nodes_4->next = NULL;
// 	// nodes_4->prev = nodes_3;

// 	// t_list* tmp = nodes_1;
// 	// while (tmp != NULL)
// 	// { 
// 	// 	printf("%d ", tmp->value);
// 	// 	tmp = tmp->next;
// 	// }
// 	// printf("\n");
// 	push(b);
// 	print_list(nodes_1);
// 	//rotate(&nodes_1);
// 	//reverse_rotate(&nodes_1);

// 	// tmp = nodes_1;
// 	// while (tmp != NULL)
// 	// {
// 	// 	printf("%d ", tmp->value);
// 	// 	tmp = tmp->next;
// 	// }
// 	// printf("\n");

// 	return 0;
// }
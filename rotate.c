/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:32:42 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:30:11 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp1 = *a;
	*a = (*a)-> next;
	tmp2 = *a;
	while (tmp2 -> next)
		tmp2 = tmp2 -> next;
	tmp2 -> next = tmp1;
	tmp1 -> next = NULL;
}

void	ra(t_list **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}

// void	print_list(t_list *head)
// {
// 	t_list	*tmp;

// 	tmp = head;
// 	while (tmp != NULL)
// 	{
// 		printf("%d ", tmp->value);
// 		tmp = tmp->next;
// 	}
// 	printf("\n");
// }
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
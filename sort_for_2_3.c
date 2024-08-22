/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_2_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:32:51 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/01 13:54:04 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **a)
{
	if (is_sorted(*a))
		return ;
	else
		sa(a);
}

void	sort_3(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	if (is_sorted(*a))
		return ;
	help_sort_3(a, tmp);
	if ((tmp -> value > tmp->next ->value)
		&& (tmp->value < tmp->next->next->value))
		sa(a);
	else if ((tmp->value > tmp->next->next->value)
		&& (tmp->value < tmp ->next->value))
		rra(a);
	else if ((tmp->next->next-> value > tmp->next->value)
		&& (tmp->next->next->value < tmp->value))
		ra(a);
	else if ((tmp->next->value < tmp->value)
		&& (tmp->next->next->value < tmp->next->value))
	{
		sa(a);
		rra(a);
	}
}

void	help_sort_3(t_list **a, t_list *tmp)
{
	if ((tmp -> value < tmp->next->next ->value)
		&& (tmp ->next->next->value < tmp -> next->value))
	{
		sa(a);
		ra(a);
	}
}
// 021
// 102
// 120
// 201
// 210
	// if (tmp->value > tmp->next->value)
	// 	sa(a);
	// if(tmp->next->value > tmp->next->next->value)
	// 	rra(a);
	// if(tmp->value > tmp->next->value)
	// 	sa(a);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:33:00 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/01 15:18:14 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_distance(t_list **a, int num)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = *a;
	while (tmp->value > num)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	sort_4(t_list **a, t_list **b)
{
	int	dis;

	dis = get_distance(a, get_min(a));
	if (is_sorted(*a))
		return ;
	if (dis == 1)
		ra(a);
	else if (dis == 2)
	{
		ra(a);
		ra(a);
	}
	else if (dis == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_list **a, t_list **b)
{
	int	dis;

	dis = get_distance(a, get_min(a));
	if (is_sorted(*a))
		return ;
	if (dis == 1)
		ra(a);
	else if (dis == 2)
	{
		ra(a);
		ra(a);
	}
	else if (dis == 3)
	{
		rra(a);
		rra(a);
	}
	else if (dis == 4)
		rra(a);
	if (is_sorted(*a))
		return ;
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:32:24 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:29:13 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **a)
{
	t_list	*tmp2;
	t_list	*tmp1;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp1 = *a;
	while ((*a)-> next-> next)
		(*a) = (*a)-> next;
	tmp2 = *a;
	*a = (*a)-> next;
	(*a)-> next = tmp1;
	tmp2 -> next = NULL;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_putstr("rra\n");
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_putstr("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr("rrr\n");
}

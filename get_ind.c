/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ind.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:31:43 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/13 15:17:09 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_ind(t_list **a)
{
	t_list	*tmp;
	int		index;
	int		count;
	int		val;

	index = 0;
	count = 0;
	tmp = *a;
	if (!tmp)
	{
		return (0);
	}
	val = (*a)-> value;
	while (tmp)
	{
		if (tmp -> value > val)
		{
			val = tmp -> value;
			index = count;
		}
		tmp = tmp -> next;
		count++;
	}
	return (index);
}

int	get_min(t_list **a)
{
	t_list	*tmp ;
	int		n;

	tmp = *a;
	if (!tmp)
		return (0);
	n = tmp -> value;
	while (tmp -> next)
	{
		if (n > tmp->next->value)
			n = tmp->next->value;
		tmp = tmp -> next;
	}
	return (n);
}

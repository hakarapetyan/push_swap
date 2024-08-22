/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:33:10 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/13 14:30:06 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(a);
	if (is_sorted(*a) || ft_lstsize(a) == 0
		|| ft_lstsize(a) == 1)
		return ;
	if (size == 2)
	{
		sort_2(a);
	}
	else if (size == 3)
	{
		sort_3(a);
	}
	else if (size == 4)
	{
		sort_4(a, b);
	}
	else if (size == 5)
		sort_5(a, b);
}

void	push_to_a(t_list **a, t_list **b, int len)
{
	int	i;

	i = get_max_ind(b);
	if (i <= len / 2)
	{
		while (i > 0)
		{
			rb(b);
			i--;
		}
	}
	else if (i > len / 2)
	{
		while (i < len)
		{
			rrb(b);
			i++;
		}
	}
	pa(a, b);
}

void	the_end(t_list **a, t_list **b)
{
	int	len;

	len = ft_lstsize(b);
	while (len)
	{
		push_to_a(a, b, len);
		len--;
	}
}

void	n_sort(t_list **a, t_list **b, int *arr)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(a);
	arr = create_ar_from_list(a, arr);
	arr_sort(arr, len);
	help_n_sort(arr, a, b, len);
	the_end(a, b);
	free(arr);
}

void	help_n_sort(int *arr, t_list **a, t_list **b, int len)
{
	int	i;
	int	n;

	i = 0;
	n = get_optimal_value(len);
	while ((*a) && i < len)
	{
		if ((*a)-> value <= arr[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)-> value <= arr[i + n])
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

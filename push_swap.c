/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:31:53 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/16 14:36:49 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_list **a, t_list **b, int *arr)
{
	int	len;

	len = ft_lstsize(a);
	if (len <= 5)
		simple_sort(a, b);
	else
		n_sort(a, b, arr);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		*arr;

	a = NULL;
	b = NULL;
	arr = NULL;
	if (argc <= 1)
		return (0);
	add_to(argc, argv, &a);
	if (is_sorted(a))
		ft_free_list(&a);
	else
	{
		sort_stack(&a, &b, arr);
	}
	ft_free_list(&a);
	ft_free_list(&b);
	a = NULL;
	b = NULL;
}

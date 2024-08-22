/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:31:25 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:20:44 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_ar_from_list(t_list **a, int *arr)
{
	int		i;
	t_list	*tmp;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (ft_lstsize(a)));
	if (!arr)
		return (0);
	tmp = *a;
	while (tmp)
	{
		arr[i] = tmp -> value;
		i++;
		tmp = tmp-> next;
	}
	return (arr);
}

int	*arr_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] < arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

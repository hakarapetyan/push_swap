/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:48:02 by hakarape          #+#    #+#             */
/*   Updated: 2024/06/30 14:49:10 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int num)
{
	int	i;
	int	n;

	i = 1;
	n = num;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	while (n - i > 1 && i <= 46340)
	{
		n = (n + i) / 2;
		i = num / n;
	}
	return (n);
}

int	ft_log(int n)
{
	int	i;

	i = 0;
	if (n <= 1)
		return (0);
	while (n > 1)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

int	get_optimal_value(int len)
{
	return (ft_sqrt(len) + ft_log(len) + 1);
}

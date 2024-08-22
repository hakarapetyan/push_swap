/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:33:37 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/16 14:37:06 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

int	val_len(char *str, int i)
{
	int	count;

	count = 0;
	i = 0;
	if (str[i])
	{
		while ((str[i] && str[i] == '0')
			|| (str[i] && (str[i] == '+' || str[i] == '-')))
			i++;
	}
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

long	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0 ;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (val_len(str, i) > 10)
		ft_error();
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] -48);
		i++;
	}
	if (str[i] || str[i - 1] == '-' || str[i - 1] == '+')
		ft_error();
	return (result * sign);
}

int	int_min_max(long num)
{
	if (num <= 2147483647 && num >= -2147483648)
		return (1);
	return (0);
}

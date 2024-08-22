/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:33:26 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/13 18:19:40 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	is_sorted(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp ->next)
	{
		if (tmp->value > tmp ->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_lstsize(t_list **lst)
{
	t_list	*tmp;
	int		count;

	tmp = *lst;
	count = 0;
	if (!(*lst))
		return (0);
	while (tmp)
	{
		count++;
		tmp = tmp -> next;
	}
	return (count);
}

void	ft_free_list(t_list **a)
{
	t_list	*tmp;

	if (!a)
		return ;
	while (*a)
	{
		tmp = (*a)-> next;
		free(*a);
		*a = tmp;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:31:04 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/15 10:36:32 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_doubl(t_list **a)
{
	t_list	*tmp;
	t_list	*current;
	t_list	*smp;
	int		x;

	x = 12;
	if (!(*a))
		return (0);
	tmp = *a;
	while (tmp)
	{
		smp = tmp->next;
		current = tmp->next;
		while (current)
		{
			if (tmp->value == current->value)
				return (1);
			else
				current = current->next;
		}
		tmp = smp;
	}
	return (0);
}

void	add_to(int argc, char **argv, t_list **a)
{
	int		i;
	char	**str;
	int		j;

	i = 1;
	j = 0;
	while (i <= argc - 1)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		if (!str || !*str)
			ft_error();
		for_add_to(str, a);
		i++;
		if (ft_list_doubl(a))
			ft_error();
	}
}

void	for_add_to(char **str, t_list **a)
{
	long	num;
	int		j;

	j = 0;
	while (str[j])
	{
		num = ft_atoi(str[j]);
		if (!int_min_max(num))
		{
			ft_error();
		}
		else
		{
			ft_list_add_back(a, ft_lstnew(num));
			j++;
		}
	}
	ft_free_split(str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// void	print_list(t_list *head)
// {
// 	t_list	*tmp;

// 	tmp = head;
// 	while (tmp != NULL)
// 	{
// 		printf("%d ", tmp->value);
// 		tmp = tmp->next;
// 	}
// 	printf("\n");
// }
// int	main(int argc, char **argv)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	//int		*arr;
// 	int		i;
// 	int		j;

// 	a = NULL;
// 	b = NULL;
// 	i = 0;
// 	j = 0;
// 	if (argc > 1)
// 		add_to(argc, argv,&a);
	//print_list(a);
// 	// arr = create_ar_from_list(&a);
// 	// n_sort(&a, &b, arr);
// 	// reverse_rotate(&a);
// 	//print_list(a);
//}

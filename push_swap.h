/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:02:15 by hakarape          #+#    #+#             */
/*   Updated: 2024/07/16 15:51:16 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;
int		int_min_max(long num);
long	ft_atoi(char *str);
int		ft_error(void);
void	add_to(int argc, char **argv, t_list **a);
void	for_add_to(char **str, t_list **a);

void	print_list(t_list *head);
void	ft_putstr(char *str);
int		*create_ar_from_list(t_list **a, int *arr);
size_t	ft_strlen(const char *str);
int		*arr_sort(int *arr, int size);

void	pb(t_list **b, t_list **a);
void	pa(t_list **a, t_list **b);
void	push(t_list **a, t_list **b);
void	reverse_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	rotate(t_list **head);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	swap(t_list **ptr);
void	ss(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);

int		ft_sqrt(int num);
int		ft_log(int n);
int		get_optimal_value(int len);
char	**ft_split(char const *s, char c);
char	**all_memory(char **split, char const *s, char c);
char	*word_memory(char const *s, int f_ind, int l_ind);
int		w_count(char const *s, char c);

void	n_sort(t_list **a, t_list **b, int *arr);
void	help_n_sort(int *arr, t_list **a, t_list **b, int len);
void	sort_2(t_list **a);
void	sort_3(t_list **a);
void	help_sort_3(t_list **a, t_list *tmp);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	simple_sort(t_list **a, t_list **b);
int		is_sorted(t_list *a);

int		get_min(t_list **a);
int		get_min_ind(t_list **a);
int		get_max_ind(t_list **a);
int		get_distance(t_list **a, int num);
void	ft_free_list(t_list **a);
void	ft_free_split(char **split);

void	ft_list_add_back(t_list **lst, t_list *new);
int		ft_list_doubl(t_list **a);
int		ft_lstsize(t_list **lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);

#endif 
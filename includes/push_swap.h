/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:13:27 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 08:31:23 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				rank;
	struct s_stack	*next;
}	t_stack;

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	ft_assign_rank(t_stack *stack);
void	ft_stackiter(t_stack *stack, void (*f)(t_stack *));
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_print_node(t_stack *node);
void	ft_sort_three(t_stack **a);
void	ft_move_min_to_top(t_stack **a, t_stack *min);
void	ft_sort_five(t_stack **a, t_stack **b);
void	ft_chunk_sort(t_stack **a, t_stack **b, int chunk_size);
void    ft_push_chunk(t_stack **a, t_stack **b, int min, int max);
void    ft_bring_for_next_chunk(t_stack **a, int rank);
void    ft_target_pa(t_stack **a, t_stack **b, int min, int max);
void	ft_free_stack(t_stack **stack);

int		ft_init_stack(int argc, char **argv, t_stack **a);
int		ft_checkinput(char *nbr);
int		ft_checkduplicate(char **argv);
int		ft_checkintrange(const char *str);
int		ft_stack_size(t_stack *stack);
int		ft_get_chunk_size(int size);
int		ft_has_chunk(t_stack *a, int min, int max);

t_stack	*ft_newnode(int value);
t_stack	*find_min(t_stack *stack);
t_stack *ft_stacklast(t_stack *stack);
#endif

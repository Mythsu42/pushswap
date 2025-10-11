/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:13:27 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 02:46:42 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int	value;
	int	rank;
	struct s_stack	*next;
}	t_stack;

void    sa(t_stack **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);

void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);

void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);

void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);

void	ft_assign_rank(t_stack *stack);

void	ft_stackiter(t_stack *stack, void (*f)(t_stack *));
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_print_node(t_stack *node);

int		ft_checkinput(char *nbr);
int	ft_checkduplicate(char **argv);

t_stack *ft_newnode(int value);
#endif

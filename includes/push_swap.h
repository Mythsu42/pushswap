/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:13:27 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/09 14:08:52 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_content
{
	int	value;
	int	rank;
}	t_content;

typedef struct s_list
{
	t_content		*content;
	struct s_list	*next;
}	t_list;

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

int		ft_checkinput(char *nbr);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:26:47 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/14 20:31:01 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_find_min(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack)
	{
		if (stack->rank < min->rank)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

void	ft_move_min_to_top(t_stack **a, t_stack *min)
{
	t_stack	*tmp;
	int		i;
	int		size;

	tmp = *a;
	size = 0;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = *a;
	i = 0;
	while (tmp != min)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= size / 2)
		while (*a != min)
			ra(a);
	else
		while (*a != min)
			rra(a);
}

void	ft_sort_five(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while (ft_stack_size(*a) > 3)
	{
		min = ft_find_min(*a);
		ft_move_min_to_top(a, min);
		pb(a, b);
	}
	ft_sort_three(a);
	if ((*b)->rank < (*b)->next->rank)
		sb(b);
	pa(a, b);
	pa(a, b);
}

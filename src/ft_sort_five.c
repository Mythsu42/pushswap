/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:26:47 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 11:28:56 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min(t_stack *stack)
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

void	move_min_to_top(t_stack **a, t_stack *min)
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

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while ((*a)->next->next->next->next)
	{
		min = find_min(*a);
		move_min_to_top(a, min);
		pb(a, b);
	}
	sort_three(a);
	if ((*b)->rank < (*b)->next->rank)
		sb(b);
	pa(a, b);
	pa(a, b);
}

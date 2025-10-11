/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_rank.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 02:46:00 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 02:46:09 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_rank(t_stack *stack)
{
	t_stack	*current;
	t_stack	*compare;
	int		rank;

	current = stack;
	while (current)
	{
		rank = 0;
		compare = stack;
		while (compare)
		{
			if (compare->value < current->value)
				rank++;
			compare = compare->next;
		}
		current->rank = rank;
		current = current->next;
	}
}

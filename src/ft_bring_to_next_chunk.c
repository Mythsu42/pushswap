/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_to_next_chunk.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:21:21 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 19:50:50 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bring_for_next_chunk(t_stack **a, int rank)
{
	int	pos;
	int	size;

	if (!a || !*a)
		return ;
	pos = ft_pos(*a, rank);
	size = ft_stack_size(*a);
	if (ft_stacklast(*a)->rank == rank)
		return ;
	if (pos <= size / 2)
	{
		while (ft_stacklast(*a)->rank != rank)
			ra(a);
	}
	else
	{
		while (ft_stacklast(*a)->rank != rank)
			rra(a);
	}
}

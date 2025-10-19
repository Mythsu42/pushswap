/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:23 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 19:02:36 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_chunk_sort(t_stack **a, t_stack **b, int chunk_size)
{
	int	chunk_min;
	int	chunk_max;
	int	total;

	chunk_min = 0;
	total = ft_stack_size(*a);
	while (chunk_min < total)
	{
		chunk_max = chunk_min + chunk_size;
		if (chunk_max > total)
			chunk_max = total;
		ft_push_chunk(a, b, chunk_min, chunk_max);
		if (chunk_min > 0)
			ft_bring_for_next_chunk(a, chunk_min - 1);
		ft_target_pa(a, b, chunk_min, chunk_max - 1);
		chunk_min = chunk_max;
	}
	ft_bring_for_next_chunk(a, chunk_max - 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_to_next_chunk.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:21:21 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 07:27:49 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bring_for_next_chunk(t_stack **a, int chunk_max)
{
	if (!a || !*a)
		return ;
	while (ft_stacklast(*a)->rank != chunk_max)
		rra(a);
}

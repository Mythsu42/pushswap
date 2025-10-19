/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:55:50 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/14 19:50:14 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunk(t_stack **a, t_stack **b, int min, int max)
{
	while (ft_has_chunk(*a, min, max))
	{
		if ((*a)->rank >= min && (*a)->rank < max)
			pb(a, b);
		else
			ra(a);	
	}
}

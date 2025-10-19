/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:19:17 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 08:52:56 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target_pa(t_stack **a, t_stack **b, int min, int max)
{
	while (min <= max)
	{
		if (!b || !*b)
			return ;
		if ((*b)->rank == min)
		{
			pa(a, b);
			ra(a);
			min++;
		}
		else if ((*b)->rank == max)
		{
			pa(a, b);
			max--;
		}
		else
			rb(b);
	}
}

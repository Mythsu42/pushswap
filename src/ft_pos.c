/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:33:13 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 09:50:04 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pos(t_stack *stack, int rank)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->rank == rank)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (ft_printf("ereur dans le retour de postion"));
}

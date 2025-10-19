/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:35:12 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/15 13:31:40 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_has_chunk(t_stack *a, int min, int max)
{
	while (a)
	{
		if (a->rank >= min && a->rank < max)
			return (1);
		a = a->next;
	}
	return (0);
}

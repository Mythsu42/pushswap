/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 02:20:14 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 02:20:33 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackiter(t_stack *stack, void (*f)(t_stack *))
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		f(tmp);
		tmp = tmp->next;
	}
}

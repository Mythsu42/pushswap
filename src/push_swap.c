/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 08:14:12 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
		return (1);
	ft_stackiter(a, ft_print_node);
	if (ft_stack_size(a) <= 3)
		ft_sort_three(&a);
	else if (ft_stack_size(a) <= 5)
		ft_sort_five(&a, &b);
	else
		ft_chunk_sort(&a, &b, ft_get_chunk_size(ft_stack_size(a)));
	ft_stackiter(a, ft_print_node);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}

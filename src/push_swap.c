/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 02:47:37 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *stack_A;
	t_stack *stack_B;
	t_stack *new;
	int	i;
	
	stack_A = NULL;
	stack_B = NULL;
	(void)stack_B;
	i = 1;
	if (argc < 2)
		return (ft_printf("need number\n"));
	while (i < argc)
	{
		if (!ft_checkinput(argv[i++]))
			return (ft_printf("wrong input\n"));
	}
	if (!ft_checkduplicate(argv))
		return (ft_printf("Error: duplicate values\n"));
	i = 1;
	while (i < argc)
	{
		new = ft_newnode(atoi(argv[i]));
		ft_stackadd_back(&stack_A, new);
		i++;
	}
	ft_assign_rank(stack_A);
	ft_stackiter(stack_A, ft_print_node);
	return (0);
}

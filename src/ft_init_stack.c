/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:23:14 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/11 12:26:41 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stack **a)
{
	t_stack	*new;
	int		i;

	if (argc < 2)
		return (ft_printf("need number\n"), 0);
	i = 1;
	while (i < argc)
	{
		if (!ft_checkinput(argv[i]))
			return (ft_printf("wrong input\n"), 0);
		i++;
	}
	if (!ft_checkduplicate(argv))
		return (ft_printf("Error: duplicate values\n"), 0);
	i = 1;
	while (i < argc)
	{
		new = ft_newnode(ft_atoi(argv[i]));
		ft_stackadd_back(a, new);
		i++;
	}
	ft_assign_rank(*a);
	return (1);
}

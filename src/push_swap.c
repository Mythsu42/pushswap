/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/07 09:42:16 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 1)
		return (ft_printf("need number"));
	while (i < argc)
	{
		if (!ft_checkinput(argv[i++]))
			return (ft_printf("wrong input"));
	}
	i = 1;
	while (i < argc) 
	{
		ft_printf(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}

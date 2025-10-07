/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 05:40:10 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/07 08:06:04 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkinput(char *nbr)
{
	if (!ft_isnumber(nbr) || !ft_checkintrange(ft_atoi(nbr)))
		return (0);
	return (1);
}

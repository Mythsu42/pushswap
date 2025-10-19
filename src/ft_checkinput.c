/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 05:40:10 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 08:28:24 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkinput(char *nbr)
{
	if (!ft_isnumber(nbr) || !ft_checkintrange(nbr))
		return (0);
	return (1);
}

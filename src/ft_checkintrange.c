/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkintrange.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 08:28:40 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/19 08:30:35 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkintrange(const char *str)
{
	long		n;
	int			sign;
	int			i;

	n = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		n = n * 10 + (str[i] - '0');
		if ((sign * n) < INT_MIN || (sign * n) > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

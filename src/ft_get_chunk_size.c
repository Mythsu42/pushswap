/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_chunk_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:08:39 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/14 17:16:42 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_chunk_size(int size)
{
	if (size <= 10)
		return (2);
	else if (size <= 50)
		return (size / 3);
	else if (size <= 100)
		return (size / 5);
	else if (size <= 300)
		return (size / 7);
	else if (size <= 500)
		return (size / 11);
	return (size / 15);
}

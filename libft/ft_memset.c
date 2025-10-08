/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:38:50 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 17:44:51 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t nbr)
{
	size_t	i;

	i = 0;
	while (i < nbr)
		((unsigned char *)ptr)[i++] = (unsigned char)n;
	return (ptr);
}

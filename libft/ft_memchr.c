/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:37:39 by ktolba            #+#    #+#             */
/*   Updated: 2025/04/30 00:00:20 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- > 0)
		if (((unsigned char *)str)[i++] == (unsigned char)c)
			return ((unsigned char *)str + --i);
	return (NULL);
}

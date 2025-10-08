/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:39:48 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/20 15:42:14 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

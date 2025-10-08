/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:40:10 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/25 11:27:35 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
	ft_strlcpy(dest + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (dest);
}

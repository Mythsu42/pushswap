/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:40:27 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/24 00:31:19 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	result;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	result = dstlen + srclen;
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (dstlen < dstsize - 1 && src[i])
		dst[dstlen++] = src[i++];
	dst[dstlen] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:50:10 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 17:50:34 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	if (start >= s_len)
		return (ft_calloc(1, 1));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len && s[start])
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}

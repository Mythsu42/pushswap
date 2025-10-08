/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:00:50 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/25 16:30:27 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(str);
	i = 0;
	if (!str || !set)
		return (NULL);
	while (set[i])
	{
		if (str[start] == set[i])
		{
			i = -1;
			start++;
		}
		if (str[end - 1] == set[i])
		{
			i = -1;
			end--;
		}
		i++;
	}
	return (ft_substr(str, start, end - start));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:04:13 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/25 11:10:57 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **result, size_t j)
{
	while (j--)
		free(result[j]);
	free(result);
	return (NULL);
}

int	ft_count_words(const char *str, char sep)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
		{
			j++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (j);
}

char	**ft_add_words(char **result, const char *str, char sep)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && str[i] != sep)
				i++;
			end = i;
			result[j] = ft_substr(str, start, end - start);
			if (!result[j])
				return (ft_free(result, j));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *str, char sep)
{
	char	**result;
	size_t	i;

	if (!str)
		return (NULL);
	i = ft_count_words(str, sep);
	result = malloc(sizeof(char *) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = NULL;
	return (ft_add_words(result, str, sep));
}

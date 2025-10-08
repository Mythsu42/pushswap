/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:51:39 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/25 16:35:52 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long int nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_write_in_str(char *result, long int nbr, int is_negative, int len)
{
	result[len] = '\0';
	while (--len >= 0)
	{
		result[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	int			is_negative;
	char		*result;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	len = 0;
	is_negative = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		is_negative = 1;
		len++;
	}
	len += ft_len(nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	return (ft_write_in_str(result, nbr, is_negative, len));
}

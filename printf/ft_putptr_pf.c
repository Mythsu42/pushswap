/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:53:23 by ktolba            #+#    #+#             */
/*   Updated: 2025/10/07 06:59:36 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	int		len;

	len = 0;
	if (ptr == NULL)
		return (ft_putstr_pf("(nil)"));
	len += ft_putstr_pf("0x");
	if (ptr == 0)
		len += ft_putchar_pf('0');
	else
		len += ft_puthexptr_pf((size_t)ptr);
	return (len);
}

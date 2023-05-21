/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:49:22 by sisen             #+#    #+#             */
/*   Updated: 2023/01/07 23:49:25 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

size_t	ft_strlen(const char *str)
{
	if (*str)
		return (1 + ft_strlen(str + 1));
	return (0);
}

int	ft_putnumber(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		if (num == -2147483648)
			return (ft_putconvert(2147483648, "0123456789") + 1);
		num *= -1;
		return (ft_putconvert(num, "0123456789") + 1);
	}
	return (ft_putconvert(num, "0123456789"));
}

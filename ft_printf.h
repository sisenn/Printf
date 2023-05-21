/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:49:14 by sisen             #+#    #+#             */
/*   Updated: 2023/01/07 23:49:18 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t			ft_strlen(const char *str);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnumber(int num);
int				ft_printf(const char *str, ...);
int				ft_putconvert(size_t num, char *base);
void			ft_check(va_list args, char str, int *len);

#endif

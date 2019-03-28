/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 18:58:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/03/28 13:34:26 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../Libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef int (*p_func)(va_list);

typedef enum 
{
	c = 0, s, p, d, i, o, u, x, X, nb_format, no_format
} FORMAT_TOKEN;

typedef struct s_Format
{
	char token;
	p_func func;
	FORMAT_TOKEN next_format;
} Format;

void	ft_printf(const char *format, ...);
int		main(void);

# endif

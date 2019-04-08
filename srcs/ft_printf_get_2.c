/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:38:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/04/07 11:52:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	ft_get_octal()
{
	return ('o');
}

char	ft_get_unsigned()
{
	return ('u');
}

char	ft_get_hexa()
{
	return ('x');
}

char	ft_get_hexa_maj()
{
	return ('X');
}
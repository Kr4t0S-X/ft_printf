/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aff_reforged.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:35:39 by cghanime          #+#    #+#             */
/*   Updated: 2019/06/17 08:30:46 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* PRINT CHAR */

int		ft_print_char(t_ptf *percents)
{
	percents->size = 1;

	/*while ((*percents->options) && *(percents->options)++)
		if (*(percents->options) == '-' && (percents->width) > percents->size)
		{

			ft_putchar(percents->a_t.a_char);
			write(1, " ", (percents->width) - percents->size);
		}
		else
	*/
	ft_putchar(percents->a_t.a_char);
	return (TRUE);
}

/* PRINT STRING */


char 	*str_precision(char *str, unsigned long precision)
{
	char	*new;
	int		i;
	
	printf("%lu\n", precision);
	if (ft_strlen(str) < precision || !precision)
		return (str);
	if (!(new = (char *)malloc(sizeof(char) * (precision + 1))))
		return (NULL);
	i = -1;
	while (str[++i] && i < (int)precision)
		new[i] = str[i];
	new[i] = '\0';
	free(str);
	return (new);

}

int		ft_print_string(t_ptf *percents)
{
	char *str;
	
	str = ft_strdup(percents->a_t.a_string);
	str = str_precision(str, percents->precision);
//	ft_putstr(str);
	printf("\t"_RED"%s"_END"", str);
	percents->size = ft_strlen(percents->a_t.a_string);
	free(str);
	return (TRUE);
}

/* PRINT ADDRESS */

//int		ft_print_address(t_ptf *percents)
//{
//	char *str;
//
//	str = NULL;
//	percents->size = ft_strlen(ft_itoa_base((long)percents->a_t.a_ptr, 16));
//	if (((percents->width) && !(percents->precision)) || ((percents->width) >= (percents->precision)))
//	{
//		if (percents->size > (percents->width))
//		{
//			str = (char *)malloc(sizeof(char) * percents->width + 1);
//			ft_strncpy(str, (char *)percents->a_t.a_ptr, (percents->width));
//			ft_putstr("0x");
//			ft_putstr(str);
//		}
//	}
//	if ((!((percents->width)) && ((percents->precision))) || ((percents->width) <= (percents->precision)))
//	{
//		if (percents->size > (percents->precision))
//		{
//			str = (char *)malloc(sizeof(char) * percents->precision + 1);
//			ft_strncpy(str, va_arg(arg,
//						char *), (percents->precision));
//			ft_putstr("0x");
//			ft_putstr(str);
//		}
//	}
//
//	if (arg == NULL) {
//		ft_putstr("0x");
//		ft_putchar('0');
//	}
//	return (TRUE);
//}
//
///* PRINT DECIMAL */
//
//
//
//int		ft_print_decimal(t_ptf *percents)
//{
//	char *str;
//	char c;
//
//	c = va_arg(arg, int);
//	percents->size = ft_strlen(ft_itoa(va_arg(arg, int)));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa(va_arg(arg, int));
//	ft_putstr(ft_width_precision(str, percents, percents->size));
//	return (TRUE);
//}
//
///* PRINT INTEGER */
//
//int		ft_print_integer(t_ptf *percents)
//{
//	char *str;
//
//	percents->size = ft_strlen(ft_itoa(va_arg(arg, int)));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa(va_arg(arg, int));
//	ft_putstr(ft_width_precision(str, percents, percents->size));
//	return (TRUE);
//}
//
///* PRINT OCTAL */
//
//int		ft_print_octal(t_ptf *percents)
//{
//	char *str;
//
//	percents->size = ft_strlen(ft_itoa(va_arg(arg, int)));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa_base(va_arg(arg, int), 8);
//	ft_hashtag_flag(percents);
//	ft_zero_flag(percents, percents->size);
//	ft_putstr(str);
//	ft_minus_flag(percents, percents->size);
//	return (TRUE);
//}
//
///* PRINT UNSIGNED */
//
//int		ft_print_unsigned(t_ptf *percents)
//{
//	char *str;
//
//	percents->size = ft_strlen(ft_itoa(va_arg(arg, int)));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa_base(va_arg(arg, int), 10);
//	ft_hashtag_flag(percents);
//	ft_zero_flag(percents, percents->size);
//	ft_putstr(str);
//	ft_minus_flag(percents, percents->size);
//	return (TRUE);
//}
//
///* PRINT HEXA */
//
//int		ft_print_hexa(t_ptf *percents)
//{
//	char *str;
//
//	percents->size = ft_strlen(ft_itoa(va_arg(arg, int)));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa_base(va_arg(arg, int), 16);
//	ft_hashtag_flag(percents);
//	ft_zero_flag(percents, percents->size);
//	ft_putstr(str);
//	ft_minus_flag(percents, percents->size);
//	return (TRUE);
//}
//
///* PRINT HEXA MAJ */
//
//int		ft_print_hexa_maj(t_ptf *percents)
//{
//	char *str;
//	int i;
//
//	percents->size = ft_strlen(ft_itoa_base(va_arg(arg, int), 16));
//	str = (char *)malloc(sizeof(char) * percents->size + 1);
//	str = ft_itoa_base(va_arg(arg, int), 16);
//	i = 0;
//	while (str[i])
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//			str[i] = str[i] - 32;
//		i++;
//	}
//	ft_putstr(ft_width_precision(str, percents, percents->size));
//	return (TRUE);
//}
//
///* PRINT FLOAT */
//
//int		ft_print_float(t_ptf *percents)
//{
//	char *str;
//	int i;
//
//	i = 0;
//	str = ft_ftoa(va_arg(arg, double));
//
//	if (percents->precision)
//		if (str[percents->precision] > 5 + '0')
//		{
//			str[i] = 0 + '0';
//			str[i - 1] += 1 + '0';
//		}
//	ft_strncat(str, "\0", percents->precision + 1);
//
//	ft_putstr(str);
//	return (TRUE);
//}
//
//

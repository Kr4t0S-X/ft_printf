/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 19:15:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/04/03 09:27:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		main(void)
{
	int a = 55;
	char b = 'a';
	char *c = "Je me presente : ";
	ft_printf("%d\n", a);
	ft_printf("%c\n", b);
	ft_printf("Coucou! %s Je suis ton ft_printf\n", c);
	ft_printf("COUCOU LES COCOS!\n");
	return (0);
}

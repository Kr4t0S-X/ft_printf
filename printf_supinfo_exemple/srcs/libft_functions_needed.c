/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions_needed.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 07:17:23 by cghanime          #+#    #+#             */
/*   Updated: 2019/03/28 10:34:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cprintf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i])
	{
		length++;
		i++;
	}
	printf("%d\n", length);
	return (length);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	write(1, &str[i], ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb > -10)
			ft_putchar(-nb);
		else 
		{
			ft_putnbr(-(nb / 10));
			ft_putnbr(-(nb % 10));
		}
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbr_base(unsigned int nb, unsigned int base)
{
	char *octal;
	char *hexa;

	hexa = "0123456789ABCDEF";
	octal = "0123456710";
	if (base == 2)
	{
		ft_putnbr(nb / 2);
		ft_putnbr(nb % 2);
	}
	if (base == 8)
	{
		ft_putnbr(nb / 8);
		ft_putnbr(nb % 8);
	}
	if (base == 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (base == 16)
	{
		if (nb <=15)
			ft_putchar(hexa[nb]);
		else
		{
			ft_putnbr(nb / 16);
			ft_putnbr(nb % 16);
		}
	}
	else
	{
		ft_putnbr(nb / base);
		ft_putnbr(nb % base);
	}
}

int	ft_counter(unsigned int nb, unsigned int base)
{
	int counter;

	counter = 0;
	if (nb == 0)
		return (counter = 1);
	while (nb != 0)
	{
		printf("counter = %d\n", counter);
		nb = nb / base;
		counter++;
	}
	counter -= 1;
	return (counter);
}

char	*ft_itoa_base(unsigned int nb, unsigned int base)
{
	char *tab;
	char *hexa;
	int octal[9] = {0, 1 ,2, 3, 4, 5, 6, 7, 10};
	int len;
	int r;

	hexa = "0123456789abcdef";
	len = ft_counter(nb, base);
	r = 0;
//	printf("len = %i\n", len);
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab[len] = '\0';
	if (base == 2)
	{
		while (len >= 0)
		{
			r = nb % base;
//			printf("len = %d\n", len);
//			printf("nb modulo base = %d\n", r);
			tab[len] = r + '0';
			if (r < 2)
				tab[len--] = octal[r] + '0';
			nb = nb / base;
		}
	}
	if (base == 8)
	{
		while (len >= 0)
		{
			r = nb % base;
//			printf("len = %d\n", len);
//			printf("nb modulo base = %d\n", r);
			tab[len] = r + '0';
			if (r < 16)
				tab[len--] = octal[r] + '0';
			nb = nb / base;
		}
	}
	if (base == 16)
	{
		while (len >= 0)
		{
			r = nb % base;
//			printf("len = %d\n", len);
//			printf("nb modulo base = %d\n", r);
			tab[len] = r + '0';
			if (r < 16)
				tab[len--] = hexa[r];
			nb = nb / base;
		}
	}
//	printf("itoa : %s", tab);
	return (tab);
}

int		main(void)
{
//	ft_putnbr_base(42, 16);
	ft_counter(300,2);
	ft_itoa_base(10, 2);
	return (0);
}
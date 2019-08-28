/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 03:38:04 by aboitier          #+#    #+#             */
/*   Updated: 2019/08/28 20:27:27 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		ft_count_pct(char *format, t_ptf **head)
{
	int i;
	int pct_count;
	int	position;

	i = -1;
	position = 0;
	pct_count = 0;
	while (format[++i])
		if (format[i] == '%')
			if ((position = ft_auscultate(format + i + 1)) != -1)
			{
				doctor((char*)format + i + 1, ++pct_count, position, head);
				add_pct_pos(head, i);
			}
	if (!pct_count)
		return (0);
	(*head)->total_pct_count = pct_count;
	return (1);
}

int		ft_auscultate(char *patient)
{
	int		i;
	int		j;
	char	needle[11];

	ft_memcpy(needle, "diouxXfcsp", 10);
	i = -1;
	while (patient[i++])
	{
		j = -1;
		while (patient[i] != needle[j++] && patient[i] && needle[j])
		{
			if (patient[i] == needle[j])
				return (i);
			else if (patient[i] == '%')
				return (-1);
		}
	}
	return (-1);
}

int		doctor(char *format, int rank, int position, t_ptf **percents)
{
	char	*symptoms;

	symptoms = ft_strsub(format, 0, position);
	if ((*percents)->next == NULL)
	{
		if (!((*percents)->next = (t_ptf*)malloc(sizeof(t_ptf))))
			return (0);
		(*percents)->next->rank = rank;
		(*percents)->next->symptoms = NULL;
		(*percents)->next->symptoms = symptoms;
		(*percents)->next->conv = format[position];
		(*percents)->next->type = NULL;
		(*percents)->next->options = 0;
		(*percents)->next->width = 0;
		(*percents)->next->precision = 0;
		(*percents)->next->flags = NULL;
		(*percents)->next->next = NULL;
		return (1);
	}
	else
		init_conv(percents, rank, symptoms, format[position]);
	return (1);
}

int		add_pct_pos(t_ptf **percents, int pos)
{
	t_ptf *word;

	word = (*percents)->next;
	while (word->next != NULL)
		word = word->next;
	word->pos = pos;
	return (1);
}

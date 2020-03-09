/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:13:36 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 19:28:10 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(t_list *list)
{
	char c;
	int i;

	i = 1;
	c = va_arg(list->arg, int);
	if (list->width != 0)
	{
		write(1, &c, 1);
		while (i++ < list->width)
			write(1, " ", 1);
	}
	else
		write(1, &c, 1);
	return (1);
}
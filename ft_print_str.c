/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:53:34 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 19:28:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(t_list *list)
{
	char *str;
	int i;

	i = 0; /*porque sino el 0 cuenta*/
	str = va_arg(list->arg, char*);
	if (list->width != 0)
	{
		while (str[i])
			write(1, &str[i++], 1);
		while(i++ < list->width)
			write(1, " ", 1);
	}
	else
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
	return (i);
}
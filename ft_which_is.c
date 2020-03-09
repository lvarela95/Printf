/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_is.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:41:46 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 18:53:06 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_which_is(t_list *list)
{
	if (list->format[list->len] == 'c')
		return (ft_print_c(list));
	else if (list->format[list->len] == 's')
		return (ft_print_str(list));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:23:57 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/06 16:32:51 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(t_list *list)
{
	while (list->format[list->len] >= '0' && list->format[list->len] <= '9')
	{
		list->width = (list->width * 10) + (list->format[list->len] - 48);
		list->len++;
	}
	return (0);
}
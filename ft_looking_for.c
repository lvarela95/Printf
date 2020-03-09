/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_looking_for.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:43:32 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/06 16:56:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_looking_for(t_list *list)
{
	if (list->format[list->len] == 'c'/* || list->format == 'S' || list->format == 'p' || list->format == 'd' 
	|| list->format == 'i' || list->format == 'u' || list->format == '%' || list->format == 'x' 
	|| list->format == 'X'*/)
		return (1);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:58:21 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 19:30:39 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int ret;
	t_list list;
	va_start(list.arg, str);
	
	ret = 0;
	list.len = 0;
	list.format = (char *)str;
	while (str[list.len] != '\0')
	{
		if (str[list.len] == '%')
		{
			list.len++;
			ft_list_init(&list);
			if (str[list.len] == '%')
			{
				write(1, "%", 1);
				ret++;
			}
			else if (str[list.len] == '-')
			{
				list.len++;
				ft_atoi(&list);
				if (list.width != 0)
				{
					ret += ft_which_is(&list);
				}
				else if (ft_looking_for(&list) == 1)
					ret += ft_which_is(&list);
			}
			else 
				ret += ft_which_is(&list);
		}
		else
		{
			write(1, &str[list.len], 1);
			ret++;
		}
		list.len++;
	}
	va_end(list.arg);
	return (ret);
}
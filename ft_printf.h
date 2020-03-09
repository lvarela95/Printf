/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:35:36 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 18:56:43 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct 	s_list
{
	va_list	arg;
	char	*format;
	int		len;
	int		prec;
	int		width;
	int		dot;
	int		zero;
	int		justi;
}				t_list;

int		ft_printf(const char *str, ...);
int		ft_print_c(t_list *list);
int		ft_atoi(t_list *list);
void	ft_list_init(t_list *list);
int		ft_looking_for(t_list *list);
int		ft_which_is(t_list *list);
int		ft_print_str(t_list *list);

#endif
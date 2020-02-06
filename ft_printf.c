/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:58:21 by lvarela           #+#    #+#             */
/*   Updated: 2020/02/06 16:57:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	which_is(char *str)
{
	if (*str == 'c' || *str == 's')
	{
		//imprimir string o carácter
	}
	if (*str == 'e' || *str == 'f' || *str == 'g' )
	{
		//imrpimir flotantes
	}
	if (*str == )
}

int	ft_lookingfor(char *str)
{
	if (*str == 'c' || *str == 'S' || *str == 'p' || *str == 'd' 
	|| *str == 'i' || *str == 'u' || *str == '%' || *str == 'x' || *str == 'X')
		return (1);
	else
		return (0);
}

int	ft_printf(char *str, ...)
{
	int i = 0;
	int is_or_not = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			is_or_not = ft_lookingfor(&str[i]);
			if (is_or_not == 1)
				which_is(&str[i]);
			if (is_or_not == 0)
				width(&str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	
	return (i);
}

int	main()
{
	char *str = "hola que tal estas?%s";
	int len;
	
	len = ft_printf(str);
	printf("%d",len);
	return (0);
}
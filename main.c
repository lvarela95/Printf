/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:12:20 by lvarela           #+#    #+#             */
/*   Updated: 2020/03/09 19:34:03 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int j;
	//int k;
	
	//int i;
	//i = printf("%s" , "hola");
	//printf("\n%d", i);
	j = ft_printf("Hola que tal estas %-6s%-3c\n", "Laura", 'h');
	printf("%d\n", j);
	j = 0;
	printf("%d\n", j);
	j = ft_printf("Hola que tal %-6s\n", "Laura");
	printf("%d\n", j);
	return (0);
}
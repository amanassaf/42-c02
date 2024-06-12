/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:39:16 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/08 11:11:23 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 31;
	b = 6;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d", *div, *mod);
	return (0);
}*/

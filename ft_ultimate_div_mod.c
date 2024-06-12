/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:15:42 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/08 11:52:34 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	*ptr1;
	int	*ptr2;

	num1 = 31;
	num2 = 6;
	ptr1 = &num1;
	ptr2 = &num2;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d\n%d", *ptr1, *ptr2);
	return (0);
}*/	

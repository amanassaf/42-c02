/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:54:30 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/07 19:38:33 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/* to test
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 6;
	ft_swap(&a, &b);
	printf("%d\n%d", a,b);
	return(0);
}*/

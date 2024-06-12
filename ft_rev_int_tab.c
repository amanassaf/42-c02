/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:06:02 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/10 17:34:48 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */
void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	tmp;
	int	length;

	x = 0;
	length = size - 1;
	while (x < length)
	{
		tmp = tab[x];
		tab[x] = tab[length];
		tab[length] = tmp;
		x++;
		length--;
	}
}
/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(arr, 5);
	printf("reversing the array gives :\n %d, %d, %d, %d, %d", arr[0], arr[1],
       	arr[2], arr[3], arr[4]);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:36:19 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/10 19:40:55 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	length;

	a = 0;
	length = size - 1;
	while (a < length)
	{
		b = 0;
		while (b < length)
		{
			if (tab[b] > tab[b + 1])
			{
				swap(&tab[b], &tab[b + 1]);
				b = 0;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	int	arr[] = {2, 6, 3, 4, 5};
	ft_sort_int_tab(arr, 5);
	printf("sorting the array ascdending gives :\n %d%d%d%d%d",arr[0], arr[1], arr[2], arr[3], arr[4]);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:12:39 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/11 11:32:27 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 65 || str[x] > 90)
			&& (str[x] < 97 || str[x] > 122))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	int	y = 3;		
	char	arr1[] = "Hello";
	char	arr2[] = "12345";
	char	arr3[] = "42 Amman";
	char	arr4[] = "";
	y = ft_str_is_alpha(arr1);
	printf("%d\n", y);
	y = ft_str_is_alpha(arr2);
	printf("%d\n", y);
	y = ft_str_is_alpha(arr3);
	printf("%d\n", y);
	y = ft_str_is_alpha(arr4);
	printf("%d\n", y);
	return (0);
}*/

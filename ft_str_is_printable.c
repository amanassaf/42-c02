/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:32:31 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/12 17:16:26 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] < 32 || str[x] > 126)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	int	y = 5;
	char	arr1[] = "abc123";
	char	arr2[] = "hello";
	char	arr3[] = "2000";
	char	arr4[] = "$$$$???";
	char	arr5[] = "HELLO";
	char	arr6[] = "";
	char	arr7[] = "\t";
 
	y = ft_str_is_printable(arr1);
	printf("%d\n", y);
	y = ft_str_is_printable(arr2);
	printf("%d\n", y);
	y = ft_str_is_printable(arr3);
	printf("%d\n", y);
	y = ft_str_is_printable(arr4);
	printf("%d\n", y);
	y = ft_str_is_printable(arr5);
        printf("%d\n", y);
        y = ft_str_is_printable(arr6);
        printf("%d\n", y);
	y = ft_str_is_printable(arr7);
	printf("%d\n", y);	
	return (0);
}*/

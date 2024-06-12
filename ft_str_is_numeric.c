/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:34:10 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/12 15:20:57 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 48 || str[x] > 57)
			return (0);
		x++;
	}
	return (1);
}
/*int	main(void)
{
	int	y = 4;
	char	arr1[] = "abc123";
	char	arr2[] = "hello";
	char	arr3[] = "2000";
	char	arr4[] = "$$$$???";
	char	arr5[] = "";
	y = ft_str_is_numeric(arr1);
	printf("%d\n", y);
	y = ft_str_is_numeric(arr2);
	printf("%d\n", y);
	y = ft_str_is_numeric(arr3);
	printf("%d\n", y);
	y = ft_str_is_numeric(arr4);
	printf("%d\n", y);
	y = ft_str_is_numeric(arr5);
        printf("%d\n", y);
	return (0);
}*/

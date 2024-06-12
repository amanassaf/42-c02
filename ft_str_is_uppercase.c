/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:08:28 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/12 16:37:50 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_char(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 65 || str[x] > 90)
			return (0);
		x++;
	}
	return (1);
}
/*int	main(void)
{
	int	y = 9;
	char	arr1[] = "abc123";
	char	arr2[] = "hello";
	char	arr3[] = "2000";
	char	arr4[] = "$$$$???";
	char	arr5[] = "HELLO";
	char	arr6[] = "";

	y = ft_str_is_char(arr1);
	printf("%d\n", y);
	y = ft_str_is_char(arr2);
	printf("%d\n", y);
	y = ft_str_is_char(arr3);
	printf("%d\n", y);
	y = ft_str_is_char(arr4);
	printf("%d\n", y);
	y = ft_str_is_char(arr5);
        printf("%d\n", y);
        y = ft_str_is_char(arr6);
        printf("%d\n", y);
	return (0);
}*/

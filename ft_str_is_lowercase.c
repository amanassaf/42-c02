/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:00:42 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/11 12:06:37 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 97 || str[x] > 122)
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
	char	arr5[] = "HELLO";
	char	arr6[] = "";
	
	y = ft_str_is_lowercase(arr1);
	printf("%d\n", y);
	y = ft_str_is_lowercase(arr2);
	printf("%d\n", y);
	y = ft_str_is_lowercase(arr3);
	printf("%d\n", y);
	y = ft_str_is_lowercase(arr4);
	printf("%d\n", y);
	y = ft_str_is_lowercase(arr5);
        printf("%d\n", y);
        y = ft_str_is_lowercase(arr6);
        printf("%d\n", y);	     
	return (0);
}*/

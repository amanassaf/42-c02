/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:43:02 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/12 18:33:16 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	*ft_strlowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}
/*int     main(void)
{
        char    arr[] = "HELLO 42 AMMAN";
        printf("this is the original string: %s\n", arr);
	ft_strlowercase(arr);
	printf("After conversion into lowercase: %s\n", arr);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:52:50 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/11 21:21:44 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[25] = "Hello from 42 Amman";
	char	dest[24] = "";
	printf(" copying elements to dest: %s", ft_strcpy(dest, src));
	return (0);
}*/

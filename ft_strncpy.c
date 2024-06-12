/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:02:05 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/11 11:10:12 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[15] = "";
	char src[] = "Hello evaluator";
	ft_strncpy(dest, src, 15);
	printf("copying elements to dest: %s", ft_strncpy(dest,src,15));
}*/

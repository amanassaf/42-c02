/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:16:02 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/12 18:19:54 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}

/*int     main(void)
{
        char    arr[] = "hello 42 amman";
        printf("this is the original string: %s\n", arr);
	printf("After conversion into uppercase: %s\n", ft_strupcase(arr));
}*/

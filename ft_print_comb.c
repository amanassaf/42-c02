/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaassaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:17:19 by amaassaf          #+#    #+#             */
/*   Updated: 2024/06/05 12:25:15 by amaassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print(char dig1, char dig2, char dig3)
{
	if (dig1 != '7')
	{
		write(1, &dig1, 1);
		write(1, &dig2, 1);
		write(1, &dig3, 1);
		write(1, ", ", 1);
	}	
	else
	{
		write(1, &dig1, 1);
		write(1, &dig2, 1);
		write(1, &dig3, 1);
	}
}

void	ft_print_comb(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	dig2 = '1';
	dig3 = '2';
	while (dig1 <= '7')
	{
		while (dig2 <= '8')
		{
			while (dig3 <= '9')
			{
				print(dig1, dig2, dig3);
				dig3++;
			}	
			dig2++;
			dig3 = dig2 + 1;
		}
		dig1++;
		dig2 = dig1 + 1;
		dig3 = dig2 + 1;
	}
}
/*int main (void)	
{ ft_print_comb();
  return (0); 
  write(1, (char []){dig1, dig2, dig3, ',', ' '}, 5);
  write(1, (char []){dig1, dig2, dig3}, 3);
} */

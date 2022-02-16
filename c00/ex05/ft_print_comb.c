/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:57:10 by bcayir            #+#    #+#             */
/*   Updated: 2021/11/27 03:16:13 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x1;
	char	x2;
	char	x3;

	x1 = '0' ;
	while (x1 <= '7' )
	{
		x2 = x1 + 1;
		while (x2 <= '8' )
		{
			x3 = x2 + 1;
			while (x3 <= '9' )
			{
				ft_putchar(x1);
				ft_putchar(x2);
				ft_putchar(x3);
				if (x1 != '7' || x2 != '8' || x3 != '9')
					write(1, ", ", 2);
				x3++;
			}
			x2++;
		}
		x1++;
	}
}

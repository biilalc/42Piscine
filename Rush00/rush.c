/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:29:51 by bcayir            #+#    #+#             */
/*   Updated: 2021/11/28 15:29:45 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ud(int y)
{
	int	tur;

	tur = 1;
	ft_putchar('o');
	while (tur <= (y - 2))
	{
		ft_putchar('-');
		tur++;
	}
	if (y != 1)
		ft_putchar('o');
	ft_putchar('\n');
}	

void	left(int y)
{
	int	tur;

	tur = 1;
	ft_putchar('|');
	while (tur <= (y - 2))
	{
		ft_putchar(' ');
		tur++;
	}
	if (y != 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int y, int x)
{
	int	tur;

	tur = 1;
	if (x < 1 || y < 1)
		write(1, "* * * YOU CAN ONLY USE NUMBERS GREATER THAN 0 * * *", 51);
	else
	{
		ud(y);
		while (tur <= (x - 2))
		{
			left(y);
			tur++;
		}
		if (x != 1)
			ud(y);
	}
}

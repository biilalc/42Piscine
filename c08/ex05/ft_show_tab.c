/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:57:28 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 19:57:40 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648) //eğer tamsayı en küçük sınırın altındaysa (-2147483648), özel bir işlem yapılır
	{
		ft_putchar('-'); //eksi işareti yazdırılır
		ft_putchar('2'); //2 rakamı yazdırılır
		ft_putnbr(147483648); //sayının geri kalanı yazdırılır
	}
	else if (nb < 0) //eğer tamsayı negatifse
	{
		ft_putchar('-'); //eksi işareti yazdırılır
		nb = -nb; //sayının mutlak değeri hesaplanır
		ft_putnbr(nb); //mutlak değeri yazdırılır
	}
	else if (nb > 9) //eğer tamsayı 9'dan büyükse
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else //eğer tamsayı 0-9 aralığındaysa
		ft_putchar(nb + 48); //tamsayının ASCII koduna göre karakteri yazdırılır (0-9 aralığı için, tamsayı+48 = karakter)
}

void	ft_show_tab(struct s_stock_str *par) //ft_stock_str yapısını kullanan bir karakter dizisi işleme fonksiyonu
{
	int	index;

	index = 0;
	while (par[index].str != 0) //dizinin sonuna kadar döngü devam eder
	{
		ft_putstr(par[index].str); //dizinin "str" elemanı yazdırılır
		ft_putstr("\n");
		ft_putnbr(par[index].size); //"size" elemanı tamsayı olarak yazdırılır
		ft_putstr("\n");
		ft_putstr(par[index].copy); //"copy" elemanı yazdırılır
		ft_putstr("\n");
		index++;
	}
}

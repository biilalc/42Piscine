/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:06:45 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 15:06:55 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h" //bu kütüphane sistem tarafından verilecek

int	ft_str_length(char *str) //gelen stringin uzunluğunu hesaplayan fonksiyon
{
	int	index;

	index = 0;
	while (str[index]) //dizinin sonuna gelene kadar döngü devam eder
		index++;
	return (index);
}

char	*ft_strdup(char *src) //gelen stringi kopyalayan fonksiyon
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1); //dizinin kopyasını tutacak yeni bir bellek bloğu oluşturulur
	if (dest == NULL) //yer oluşturulmadıysa NULL döndürülür
		return (0);
	while (src[index])
		dest[index++] = src[index++];
	dest[index] = '\0'; //son elemana null karakteri eklenir
	return (dest); //kopya string return edilir
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av) //bir dizi stringi s_stock_str yapısına dönüştüren fonksiyon
{
	int					index;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str)); //diziyi tutacak yeni bir bellek bloğu oluşturulur
	if (array == NULL) //yer oluşturulmadıysa NULL döndürülür
		return (NULL);
	index = 0;
	while (index < ac) //dizinin sonuna kadar döngü devam eder
	{
		array[index].size = ft_str_length(av[index]); //stringin uzunluğu belirlenir ve s_stock_str yapısındaki size elemanına atanır
		array[index].str = av[index]; //s_stock_str yapısındaki str elemanı, orijinal stringe eşitlenir
		array[index].copy = ft_strdup(av[index]); //kopya string, s_stock_str yapısındaki copy elemanına atanır
		index++;
	}
	array[index] = (struct s_stock_str){0, 0, 0}; //s_stock_str yapısının son elemanı sıfırlanır
	return (array); //dönüştürülen dizi, s_stock_str yapısı içinde return edilir
}

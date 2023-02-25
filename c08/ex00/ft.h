/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:04:56 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 15:05:08 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H //FT_H tanımlanmamışsa,
# define FT_H //FT_H'ı tanımla (tanımlandıysa bu satırı atlayacak)

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);          //burada yapılan işlemlerin açıklaması : "ben bu fonksiyonları tekrar tekrar tekrar kullanmak istiyorum,
void	ft_putstr(char *str);             //her seferinde fonksiyonları yazmak istemiyorum, prototiplerini buraya tanımladım,
int		ft_strlen(char *str);             //çağırdığım zaman direkt gel beni yorma"
int		ft_strcmp(char *s1, char *s2);

#endif

//kısaca .h dosyaları bizim işimizi kolaylaştıran bir fonksiyon kütüphanesidir.
//.c dosyalarında kodların üstüne #include "ft.h" yazdığımızda .h dosyasında tanımlanan fonksiyonları kullanabiliriz
//printf kullanmak istediğimiz zaman #include <stdio.h> yazmakla aynı şey

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:57:22 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 15:03:49 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H      // FT_BOOLEAN_H sembolü tanımlanmamışsa,
# define FT_BOOLEAN_H     // FT_BOOLEAN_H sembolünü tanımla.

# include <unistd.h>      // unistd.h kütüphanesi eklendi. Böylelikle .c dosyasında unistd.h tanımlamama gerek kalmayacak, 
                          // #include "ft_boolean.h" yazdığım zaman unistd.h da tanımlanmış olacak

typedef enum e_bool       // Yeni bir enum türü tanımlandı ve e_bool adı verildi.
{
	false = 0,           // false değeri, 0 olarak tanımlandı.
	true = 1             // true değeri, 1 olarak tanımlandı.
}	t_bool;                // t_bool olarak yeni bir tip tanımlandı. Bunu bir nickname olarak düşünebiliriz, .c dosyasında bu türü çağırırken bu isimle çağırılır.

# define FALSE false      // FALSE sabiti, false değerine eşitlendi. Yani .c dosyasında "FALSE" yazdığım zaman bunu sıfır olarak algılayacak
# define TRUE true        // TRUE sabiti, true değerine eşitlendi.

# define EVEN(number) (number % 2 == 0)  // EVEN makrosu, verilen sayının çift olup olmadığını kontrol eder.

# define EVEN_MSG "I have an even number of arguments.\n"  // EVEN_MSG sabiti, çift sayıda argüman olduğunda yazdırılacak mesajdır.
# define ODD_MSG "I have an odd number of arguments.\n"    // ODD_MSG sabiti, tek sayıda argüman olduğunda yazdırılacak mesajdır.

# define SUCCESS 0       // SUCCESS sabiti, 0 değerine eşitlendi.

#endif                    // FT_BOOLEAN_H sembolünün tanımı bitti.

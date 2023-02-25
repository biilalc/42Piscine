/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:05:41 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 15:05:52 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value < 0 ? -Value : Value) //Bunu if-else gibi düşünün. C dilinde buna üç operatör (ternary operator) denir. Aşağıda çalışma mantığı yazıyor

#endif

/*
    Bu kod, bir sayının mutlak değerini hesaplamak için bir makro tanımlar. Makronun adı ABS'dir ve bir argüman olan Value parametresi alır.
    
    Makro tanımı, Value'nun 0'dan küçük olup olmadığını kontrol eder. Eğer Value 0'dan küçükse, o zaman (-Value) geri döndürülür. 
    Aksi halde, yani Value 0 veya daha büyükse, Value değeri doğrudan geri döndürülür.

    Bu makro, kullanıcıların kodlarında mutlak değer hesaplamak için bir işlev çağırmalarına gerek kalmadan,
    doğrudan makro adını ve değeri kullanarak hesaplama yapmalarına olanak tanır. 
    
    Örneğin, ABS(-5) ifadesi -5'in mutlak değerini, yani 5'i hesaplayacaktır. 
    Bu nedenle, bu makro kodun daha okunaklı ve daha kısa olmasını sağlar.
*/

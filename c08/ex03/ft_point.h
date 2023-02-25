/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:06:19 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/16 15:06:29 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

/*
	bu yapıyı bir veritabanı olarak düşünebilirsiniz
	s_point adında bir struct oluşturduk ve buna iki adet int değer tanımladık

	bunun bize ne yararı var : .c dosyasında kod yazarken her seferinde x ve y tanımlamaktan kurtulduk,
	artık bu yapıyı çağırdığımızda hazırda iki adet int değerim gelecek
	
	örneğin .c dosyasında şu şekilde kullanılabilir
	
	t_point ornek;
	ornek.x = 10;
	ornek.y = 20;
*/

#endif

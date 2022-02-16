/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:48:22 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/02 18:49:02 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	sr;
	unsigned int	de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	sr = 0;
	while (sr < nb && src[sr] != '\0')
	{
		dest[de + sr] = src[sr];
		sr++;
	}
	dest[de + sr] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:18:15 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/15 13:22:21 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*ptr;
	int		n;

	n = 0;
	while (src[n])
		n++;
	ptr = malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	n = 0;
	while (src[n])
		ptr[n++] = src[n++];
	ptr[n] = '\0';
	return (ptr);
}

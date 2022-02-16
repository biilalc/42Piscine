/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 05:47:45 by bcayir            #+#    #+#             */
/*   Updated: 2021/12/04 05:47:49 by bcayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tut;
	int	gez;
	int	d;

	d = 0;
	gez = 1;
	while (d != (size - 1))
	{
		gez = 1;
		d = 0;
		while (gez < size)
		{
			if (tab[gez] < tab[gez - 1])
			{
				tut = tab[gez];
				tab[gez] = tab[gez - 1];
				tab[gez - 1] = tut;
			}
			else
				d++;
			gez++;
		}
	}
}

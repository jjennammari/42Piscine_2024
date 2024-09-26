/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:55:41 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/13 10:46:06 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	f;
	int	e;
	int	s;

	f = 0;
	e = size - 1;
	while (f < size / 2)
	{
		s = tab[f];
		tab[f] = tab[e];
		tab[e] = s;
		f++;
		e--;
	}
}

int	main(void)
{
	int	arr[5];
	int	size;
	int	n;

	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 5;
	arr[3] = 7;
	arr[4] = 9;
	size = 5;
	n = 0;
	while (n < size)
	{
		printf("%d", arr[n]);
		n++;
	}
	ft_rev_int_tab(arr, size);
	printf("\n");
	n = 0;
	while (n < size)
	{
		printf("%d", arr[n]);
		n++;
	}
	printf("\n");
	return (0);
}

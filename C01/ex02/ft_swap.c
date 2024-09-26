/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:59:01 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/10 16:41:47 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 13;
	n2 = 14;
	printf("Print old values: %i, %i\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("Print new values: %i, %i\n", n1, n2);
	return (0);
}
*/

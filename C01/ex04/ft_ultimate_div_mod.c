/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:27:10 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/11 11:03:18 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	result;
	int	remainder;

	result = 10;
	remainder = 2;
	ft_ultimate_div_mod(&result, &remainder);
	printf("Result is: %i\n", result);
	printf("Remainder is: %i\n", remainder);
	return (0);
}
*/

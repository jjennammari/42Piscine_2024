/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:07:18 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/22 21:09:03 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("5! = %d\n", ft_recursive_factorial(5));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("-5! = %d\n", ft_recursive_factorial(-5));
	return (0);
}*/

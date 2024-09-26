/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:17:39 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/22 20:50:25 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
int	main(void)
{
	printf("3 ^ 3 = %d\n", ft_recursive_power(3, 3));
	printf("3 ^ 0 = %d\n", ft_recursive_power(3, 0));
	printf("0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("3 ^ -3 = %d\n", ft_recursive_power(3, -3));
	printf("-3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
	return (0);
}*/

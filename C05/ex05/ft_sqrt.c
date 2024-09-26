/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:04:34 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/23 11:37:21 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Sqrt of -25 = %d\n", ft_sqrt(-25));
	printf("Sqrt of 0 = %d\n", ft_sqrt(0));
	printf("Sqrt of 16 = %d\n", ft_sqrt(16));
	printf("Sqrt of 49 = %d\n", ft_sqrt(49));
	return (0);
}*/

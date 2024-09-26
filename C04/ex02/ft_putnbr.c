/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:15:28 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/21 15:03:46 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c[12];
	long	nbl;
	int		i;

	nbl = nb;
	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl > 0)
	{
		c[i++] = (nbl % 10) + 48;
		nbl = nbl / 10;
	}
	while (i > 0)
		write (1, &c[--i], 1);
}
/*
int	main(void)
{
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(100);
	write (1, "\n", 1);
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return (0);
}*/

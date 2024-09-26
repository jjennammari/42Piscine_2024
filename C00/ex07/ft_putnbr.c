/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:14:10 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/26 14:30:15 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[12];
	long	nbl;
	int		i;

	nbl = nb;
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	i = 0;
	while (nbl > 0)
	{
		str[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
		write (1, &str[--i], 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(-452);
	write (1, "\n", 1);
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(100);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	return (0);
}*/

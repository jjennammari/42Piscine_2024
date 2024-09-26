/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:32:34 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/25 22:44:34 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	main(void)
{
	ft_is_negative(-5);
	write (1, "\n", 1);
	ft_is_negative(0);
	write (1, "\n", 1);
	ft_is_negative(10);
	write (1, "\n", 1);
	return (0);
}
*/

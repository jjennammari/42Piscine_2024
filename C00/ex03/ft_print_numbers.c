/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:58:24 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/25 23:12:26 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	zero;

	zero = '0';
	while (zero <= '9')
		ft_putchar(zero++);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}*/

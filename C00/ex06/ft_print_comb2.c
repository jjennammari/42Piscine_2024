/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:48:12 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/26 13:34:12 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nb(int nb);

void	ft_print_comb2(void)
{
	int	arr[2];

	arr[0] = 0;
	while (arr[0] < 99)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] < 100)
		{
			ft_write_nb(arr[0]);
			write (1, " ", 1);
			ft_write_nb(arr[1]);
			if (arr[0] != 98 || arr[1] != 99)
				write(1, ", ", 2);
			arr[1]++;
		}
		arr[0]++;
	}
}

void	ft_write_nb(int nb)
{
	char	n;

	if (nb < 10)
	{
		write (1, "0", 1);
		n = nb + 48;
		write (1, &n, 1);
	}
	else
	{
		n = nb / 10 + 48;
		write (1, &n, 1);
		n = nb % 10 + 48;
		write (1, &n, 1);
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbastos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:33:58 by pbastos-          #+#    #+#             */
/*   Updated: 2024/09/08 20:34:15 by pbastos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_row(int x);
void	middle_row(int x, int y);
void	last_row(int x);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	n_row;
	int	first;
	int	mid;
	int	end;

	n_row = 1;
	first = y;
	while (first > 0)
	{
		first_row(x);
		first = 0;
	}
	y = y - 1;
	while (y > n_row)
	{
		mid = y - 1;
		middle_row(y, mid);
		n_row++;
	}
	end = y - mid;
	while (end == 1)
	{
		last_row(1);
		end = 0;
	}
}
void	first_row(int x)
{
	int	n_col;

	n_col = 1;
	
	ft_putchar('/');
	while (n_col < x-1)
	{
		ft_putchar('*');
		n_col++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	middle_row(int x, int y)
{
	int	n_col;
	int	n_row;

	n_col = 1;
	n_row = 1;
	x = 0;
	while (n_row < y)
	{
		ft_putchar('*');
       		while (n_col < y - 1)
        	{
       			ft_putchar(' ');
       			n_col++;
       		}
		ft_putchar('*');
		ft_putchar('\n');
		n_row++;
	}
}

void	last_row(int x)
{
	int	n_col;

	n_col = 1;
	ft_putchar('\\');
	while (n_col < x - 1)
	{
		ft_putchar('*');
		n_col++;
	}
	ft_putchar('/');
}

int     main(void)
{
        rush(5, 4);
        return (0);
}

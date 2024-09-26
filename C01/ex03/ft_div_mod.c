/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:48:06 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/11 10:23:04 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	na;
	int	nb;
	int	result;
	int	reminder;

	na = 100;
	nb = 25;
	ft_div_mod(na, nb, &result, &reminder);
	printf("Result: %i\n", result);
	printf("Reminder: %i\n", reminder);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:07:17 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/21 19:10:53 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	j++;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i])
			write (1, &argv[j][i++], 1);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}

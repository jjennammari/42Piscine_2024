/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:14:54 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/24 21:01:03 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = -1;
	int	max = 8;
	int	size = max - min;
	int	i = 0;
	int	*res = ft_range(min, max);

	while (i < size)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}*/

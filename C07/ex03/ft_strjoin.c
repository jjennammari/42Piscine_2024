/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:04:04 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/25 14:10:53 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		m;
	char	*res;

	res = (char *)malloc((sizeof (strs + (size - 1))) * sizeof(char));
	if ((!res) || (!size))
		return (NULL);
	j = 0;
	m = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			res[m++] = strs[j][i++];
		i = 0;
		while (sep[i] && j < size - 1)
			res[m++] = sep[i++];
		j++;
	}
	res[m] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int		size;
	char	*sep;
	char	*strs[3];
	char	*res;

	sep = "-";
	size = 3;
	strs[0] = "Enjoy";
	strs[1] = "the";
	strs[2] = "Ocean";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	return (0);
}*/

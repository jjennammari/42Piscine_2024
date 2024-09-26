/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:43:42 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/24 12:30:33 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	if (src[i] == '\0')
		return (0);
	while (src[i])
		i++;
	s = (char *)malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "enjoy";

	printf("%s\n", ft_strdup(str));
	return (0);
}*/

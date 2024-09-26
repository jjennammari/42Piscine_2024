/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:05:46 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/17 23:59:09 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "kissa";
	char	s2[] = "KUKKA";
	char	s3[] = "zzzzz";
	char	s4[] = "kissa";

	printf("Str equal: %d\n", ft_strncmp(s1, s4, 3));
	printf("Str negative: %d\n", ft_strncmp(s2, s4, 3));
	printf("Str positive: %d\n", ft_strncmp(s3, s4, 3));
	printf("Str equal: %d\n", strncmp(s1, s4, 3));
	printf("Str negative: %d\n", strncmp(s2, s4, 3));
	printf("Str positive: %d\n", strncmp(s3, s4, 3));
	return (0);
}
*/

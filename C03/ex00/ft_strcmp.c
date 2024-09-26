/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:27:51 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/17 23:34:08 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "kkk";
	char	st1[] = "zzz";
	char	str1[] = "aaa";
	char	s2[] = "kkk";
	int	cmp;

	cmp = ft_strcmp(s1, s2);
	printf("Str equal: %d\n", cmp);
	cmp = ft_strcmp(st1, s2);
	printf("Str negative: %d\n", cmp);
	cmp = ft_strcmp(str1, s2);
	printf("Str positive: %d\n", cmp);
	return (0);
}
*/

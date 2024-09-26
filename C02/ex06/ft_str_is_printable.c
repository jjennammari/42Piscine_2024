/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:06:59 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/14 22:54:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "\n";
	char	str2[] = "Pfuuuf;!";
	char	str3[5];

	printf("Chars not printable: %d\n", ft_str_is_printable(str1));
	printf("Chars printable: %d\n", ft_str_is_printable(str2));
	printf("Str empty: %d\n", ft_str_is_printable(str3));
	return (0);
}
*/

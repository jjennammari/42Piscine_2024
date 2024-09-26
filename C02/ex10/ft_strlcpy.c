/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:38:19 by jemustaj          #+#    #+#             */
/*   Updated: 2024/09/15 18:26:02 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char src[7] = "Shieep";
	char dest[7] = "***T";
	unsigned int	size = 3;
	unsigned int len;

	len = ft_strlcpy(dest, src, size);
	printf("Dest after copy: %s\n", dest);
	printf("Length of src: %d\n", len);
	return (0);
}
*/

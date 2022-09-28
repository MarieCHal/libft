/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:19:27 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/18 14:58:36 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*str1;
	unsigned char		*str2;
	size_t				i;

	str1 = src;
	str2 = dest;
	i = 0;
	if (!(str1) && !(str2))
		return (dest);
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
/*
int	 main(void)
{
	char src1[] = "a";
	char dest1[] = "abcde";
	printf("%s\n", dest1);
	ft_memcpy(dest1 + 3, src1, 1);
	printf("%s\n", dest1);

	return (0);
}
*/

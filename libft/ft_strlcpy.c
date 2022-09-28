/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:25:14 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/03 17:46:25 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != 0)
	{
		dst [i] = src[i];
		i ++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != 0)
		i++;
	return (i);
}

/*int	main(void)
{
	char	src1[] = "cava?";
	char	dst1[] = "salut";
	printf("%zu\n", ft_strlcpy(dst1, src1, 4));
	printf("%s\n", dst1);
	return (0);
}*/

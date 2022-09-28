/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:27:47 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/03 17:45:44 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	isrc;
	size_t	idst;
	size_t	i;

	i = 0;
	isrc = ft_strlen(src);
	idst = ft_strlen(dst);
	if (dstsize == 0)
		return (isrc);
	while (i + idst < dstsize - 1 && src[i] != 0)
	{
		dst[idst + i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[idst + i] = 0;
	if (dstsize > idst)
		return (isrc + idst);
	return (dstsize + isrc);
}

/*int	main(void)
{
	char	src1[] = "l'ami";
	char	dst1[] = "oye";
	printf("%s\n", dst1);
	printf ("%zu\n", ft_strlcat(dst1, src1, 2));
	printf("%s\n", dst1);
	return (0);
}*/

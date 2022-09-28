/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:58:09 by mchalard          #+#    #+#             */
/*   Updated: 2021/10/18 11:20:58 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*str1;
	unsigned char		*str2;

	str1 = (const unsigned char *) src;
	str2 = (unsigned char *) dst;
	if (!(str1) && !(str2))
		return (dst);
	if (src < dst)
	{
		str2 = str2 + len - 1;
		str1 = str1 + len - 1;
		while (len--)
			*str2-- = *str1--;
	}
	else if (src > dst)
	{
		while (len --)
			*str2++ = *str1++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src1[] = "a";
	char	dest1[] = "abcde";

	ft_memmove(dest1 + 4, src1, 1); 
	printf("%s\n", dest1);
	return (0);
}*/

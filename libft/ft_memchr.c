/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:31:55 by mchalard          #+#    #+#             */
/*   Updated: 2021/10/22 16:09:12 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s1[] = "obabo";
	char c1 = '0';
	printf("%s\n", ft_memchr(s1, c1, 3));
	return (0);			
}*/

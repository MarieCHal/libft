/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:27:11 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/18 15:01:13 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return (str);
}

/*int	main (void)
{
	char	s1[] = "oboba";
	int	c1 = 'b';
	printf("%s\n", ft_strchr(s1, c1));
}*/

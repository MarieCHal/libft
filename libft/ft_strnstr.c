/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:57:25 by mchalard          #+#    #+#             */
/*   Updated: 2021/12/10 17:20:36 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i1;

	i1 = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	while (i1 < n && s1[i1] != 0)
	{
		if (s1[i1] == s2[0] && ft_strncmp(&s1[i1], s2, ft_strlen(s2)) == 0)
			if ((i1 + ft_strlen(s2)) <= n)
				return ((char *)&s1[i1]);
		i1++;
	}
	return (0);
}
/*	
int	main(void)
{
	char str[] = "aaabcabcd";
	char str2[] = "aaabc";
	printf("%s\n", ft_strnstr(str, str2, 5)); 
	printf("%s\n", strnstr(str, str2, 5));
	return (0);
}*/

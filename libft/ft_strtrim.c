/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:20:11 by mchalard          #+#    #+#             */
/*   Updated: 2021/10/28 19:25:47 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i1;
	int		i2;

	i1 = 0;
	if (!s1)
		return (NULL);
	i2 = ft_strlen(s1) - 1;
	if (!set)
		return ((char *)s1);
	while (s1[i1] && ft_strchr(set, s1[i1]))
		i1++;
	while (i2 >= 0 && ft_strchr(set, s1[i2]))
		i2--;
	i2++;
	if (i1 == ft_strlen(s1))
	{
		trim = (malloc(1));
		trim[0] = 0;
		return (trim);
	}
	trim = ft_substr(s1, i1, i2 - i1);
	return (trim);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	return (0);
}*/

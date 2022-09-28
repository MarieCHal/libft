/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:47:29 by mchalard          #+#    #+#             */
/*   Updated: 2022/02/25 16:12:52 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*mymalloc(const char *s, size_t len)
{
	char	*cpy;

	if (len < ft_strlen(s))
		cpy = malloc(len * sizeof(char) + 1);
	else
		cpy = malloc(ft_strlen(s) * sizeof(char) + 1);
	return (cpy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	i2;
	char			*cpy;

	i = start;
	i2 = 0;
	if (!s)
		return (NULL);
	cpy = mymalloc(s, len);
	if (!cpy)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		cpy[i2] = '\0';
		return (cpy);
	}
	while (i < (start + len) && s[i] != '\0')
	{
		cpy[i2] = s[i];
		i++;
		i2++;
	}
	cpy[i2] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("tripouille", 100, 1));
	return(0);
}*/

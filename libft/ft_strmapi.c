/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:41:59 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/06 19:19:23 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != 0)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	myfunction(unsigned int i, char str)
{
	printf("ma fonction f : index = %d et %c\n", i, str);
	return (str);
}

int	main(void)
{
	char	*str = "salut";
	printf("le resultat est %s\n", str);
	char *result = ft_strmapi(str, myfunction);
	printf("le resultat est %s\n", result);
	return (0);
}*/

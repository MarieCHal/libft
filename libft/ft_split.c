/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:39:39 by mchalard          #+#    #+#             */
/*   Updated: 2022/02/25 16:18:55 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c, int i)
{
	int	i1;

	i1 = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i1);
		i1++;
		i++;
	}
	return (i1);
}

static int	ft_len(const char *s, char c)
{
	int	i;
	int	count;
	int	trigger;

	i = 0;
	count = 0;
	trigger = 0;
	while (s[i])
	{
		if (s[i] != c)
			trigger = 1;
		if (s[i] == c && trigger == 1 && s[i + 1] != c && s[i + 1])
		{
			trigger = 0;
			count++;
		}
		i++;
	}
	if (count > 0 )
		count++;
	if (count == 0 && trigger == 1)
		count = 1;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * ft_len(s, c) + 1);
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			split[j] = ft_substr(s, i, ft_count(s, c, i));
			i += ft_count(s, c, i);
			j++;
		}
		else if (s[i] == c)
			i++;
	}
	split[j] = 0;
	return (split);
}

/*int	main(void)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("oye comment ca va ", ' ');
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return(0);
}*/

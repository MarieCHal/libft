/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:52:20 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/17 14:11:33 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str1;
	size_t	i;

	str1 = s;
	i = 0;
	while (i < n)
	{
		str1[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "como estas?";
	printf("%s\n", str);	
	ft_bzero(str, 6);
	printf("%s\n", str);
	return (0);
}*/

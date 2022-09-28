/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:58:59 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/17 14:07:26 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size * sizeof(char));
	return (ptr);
}

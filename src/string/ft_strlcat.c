/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	i;
	size_t	l;
	size_t	l2;

	i = 0;
	l = 0;
	l2 = 0;
	while (dest[l])
		l++;
	while (src[l2])
		l2++;
	if (size == 0)
	{
		return (l2);
	}
	while (src[i] && i + l < size - 1)
	{
		dest[i + l] = src[i];
		i++;
	}
	if (i < size)
		dest[i + l] = '\0';
	if (l > size)
		return (l2 + size);
	return (l + l2);
}

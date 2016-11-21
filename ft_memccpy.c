/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 23:56:55 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/21 04:11:44 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destcpy;
	const char	*srcpy;
	size_t		i;

	destcpy = dest;
	srcpy = src;
	i = 0;
	while (i < n && srcpy[i] != c)
	{
		destcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 23:54:15 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/21 02:39:37 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*srcpy;
	const char	*destcpy;
	size_t		i;

	srcpy = src;
	destcpy = dest;
	i = 0;
	while (i < n)
	{
		destcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}

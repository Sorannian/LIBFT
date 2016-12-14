/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 23:54:15 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/27 14:58:58 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcpy;
	char	*destcpy;
	size_t	i;

	srcpy = (char *)src;
	destcpy = (char *)dest;
	i = 0;
	while (i < n)
	{
		destcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}

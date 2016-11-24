/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 02:59:30 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/23 02:40:24 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*destcpy;
	char			*srcpy;
	char			*tmp;

	i = 0;
	destcpy = (char *)dest;
	srcpy = (char *)src;
	tmp = (char *)malloc(sizeof(src));
	if (tmp == NULL || !dest || !src || n <= 0)
		return (dest);
	while (i < n)
	{
		tmp[i] = srcpy[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destcpy[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}

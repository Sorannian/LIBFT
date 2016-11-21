/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 04:04:35 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/21 05:17:09 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;
	unsigned char	*c2;

	s2 = s;
	i = 0;
	c2 = c;
	while (s2[i] != c2 && s2[i] != '\0' && i < n)
		s2++;
	if (s2[i] == c2)
		return ((char *)s2);
	return (NULL);
}

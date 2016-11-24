/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 04:42:14 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/23 02:50:12 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s12;
	unsigned char	*s22;
	size_t			i;

	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (s12[i] == s22[i] && s12[i] != '\0' && s22[i] != '\0' && i < n)
		i++;
	return (s12[i] - s22[i]);
}
